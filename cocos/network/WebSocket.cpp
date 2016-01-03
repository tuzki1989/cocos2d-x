/****************************************************************************
 Copyright (c) 2010-2012 cocos2d-x.org
 Copyright (c) 2013-2014 Chukong Technologies Inc.
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.

"[WebSocket module] is based in part on the work of the libwebsockets  project
(http://libwebsockets.org)"

 ****************************************************************************/

#include "WebSocket.h"
#include "base/CCDirector.h"
#include "base/CCScheduler.h"

#include <thread>
#include <mutex>
#include <queue>
#include <list>
#include <signal.h>
#include <errno.h>

#include "libwebsockets.h"

#define WS_BUFFER_SIZE_WRITE (4096)
#define WS_BUFFER_SIZE_RECEIVE (4096)

#define  LOG_TAG    "WebSocket.cpp"
#if COCOS2D_DEBUG > 0
    #ifdef ANDROID
        #define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG,__VA_ARGS__)
    #else
        #define  LOGD(...) printf(__VA_ARGS__)
    #endif
#else
    #define  LOGD(...)
#endif

NS_CC_BEGIN

namespace network {

class WsMessage
{
public:
    WsMessage() : id(++__id), what(0), obj(nullptr){}
    unsigned int id;
    unsigned int what; // message type
    void* obj;
    
private:
    static unsigned int __id;
};
    
unsigned int WsMessage::__id = 0;

/**
 *  @brief Websocket thread helper, it's used for sending message between UI thread and websocket thread.
 */
class WsThreadHelper
{
public:
    WsThreadHelper();
    ~WsThreadHelper();
        
    // Creates a new thread
    bool createThread(const WebSocket& ws);
    // Quits sub-thread (websocket thread).
    void quitSubThread();
    
    // Sends message to UI thread. It's needed to be invoked in sub-thread.
    void sendMessageToUIThread(const std::function<void()>& cb);
    
    // Sends message to sub-thread(websocket thread). It's needs to be invoked in UI thread.
    void sendMessageToSubThread(WsMessage *msg);
    
    // Waits the sub-thread (websocket thread) to exit,
    void joinSubThread();
    
    
protected:
    void wsThreadEntryFunc();
    
private:
    std::list<WsMessage*>* _subThreadWsMessageQueue;
    std::mutex   _subThreadWsMessageQueueMutex;
    std::thread* _subThreadInstance;
    WebSocket* _ws;
    bool _needQuit;
    friend class WebSocket;
};

// Wrapper for converting websocket callback from static function to member function of WebSocket class.
class WebSocketCallbackWrapper {
public:
    
    static int onSocketCallback(struct lws *wsi,
                                enum lws_callback_reasons reason,
                                void *user, void *in, size_t len)
    {
        // Gets the user data from context. We know that it's a 'WebSocket' instance.
        if (wsi == nullptr) {
            return 0;
        }
        
        lws_context* context = lws_get_context(wsi);
        WebSocket* wsInstance = (WebSocket*)lws_context_user(context);
        if (wsInstance)
        {
            return wsInstance->onSocketCallback(wsi, reason, user, in, len);
        }
        return 0;
    }
};

// Implementation of WsThreadHelper
WsThreadHelper::WsThreadHelper()
: _subThreadInstance(nullptr)
, _ws(nullptr)
, _needQuit(false)
{
    _subThreadWsMessageQueue = new std::list<WsMessage*>();
}

WsThreadHelper::~WsThreadHelper()
{
    joinSubThread();
    CC_SAFE_DELETE(_subThreadInstance);
    delete _subThreadWsMessageQueue;
}

bool WsThreadHelper::createThread(const WebSocket& ws)
{
    _ws = const_cast<WebSocket*>(&ws);
    
    // Creates websocket thread
    _subThreadInstance = new std::thread(&WsThreadHelper::wsThreadEntryFunc, this);
    return true;
}

void WsThreadHelper::quitSubThread()
{
    _needQuit = true;
}

void WsThreadHelper::wsThreadEntryFunc()
{
    _ws->onSubThreadStarted();
    
    while (!_needQuit)
    {
        _ws->onSubThreadLoop();
    }

    _ws->onSubThreadEnded();
    
    LOGD("Websocket thread exit!\n");
}

void WsThreadHelper::sendMessageToUIThread(const std::function<void()>& cb)
{
    Director::getInstance()->getScheduler()->performFunctionInCocosThread(cb);
}

void WsThreadHelper::sendMessageToSubThread(WsMessage *msg)
{
    std::lock_guard<std::mutex> lk(_subThreadWsMessageQueueMutex);
    _subThreadWsMessageQueue->push_back(msg);
}

void WsThreadHelper::joinSubThread()
{
    if (_subThreadInstance->joinable())
    {
        _subThreadInstance->join();
    }
}

enum WS_MSG {
    WS_MSG_TO_SUBTRHEAD_SENDING_STRING = 0,
    WS_MSG_TO_SUBTRHEAD_SENDING_BINARY,
};

WebSocket::WebSocket()
: _readyState(State::CONNECTING)
, _port(80)
, _wsHelper(nullptr)
, _wsInstance(nullptr)
, _wsContext(nullptr)
, _delegate(nullptr)
, _SSLConnection(0)
, _wsProtocols(nullptr)
{
    static unsigned int id = 0;
    _id = ++id;
    
    // reserve data buffer to avoid allocate memory frequently
    _receivedData.reserve(WS_BUFFER_SIZE_RECEIVE);
}

WebSocket::~WebSocket()
{
    CC_SAFE_DELETE(_wsHelper);
    
    if (_wsProtocols != nullptr)
    {
        for (int i = 0; _wsProtocols[i].callback != nullptr; ++i)
        {
            CC_SAFE_DELETE_ARRAY(_wsProtocols[i].name);
        }
    }
	CC_SAFE_DELETE_ARRAY(_wsProtocols);
}
    
bool WebSocket::init(const Delegate& delegate,
                     const std::string& url,
                     const std::vector<std::string>* protocols/* = nullptr*/)
{
    bool ret = false;
    bool useSSL = false;
    std::string host = url;
    size_t pos = 0;
    int port = 80;
    
    _delegate = const_cast<Delegate*>(&delegate);
    
    //ws://
    pos = host.find("ws://");
    if (pos == 0) host.erase(0,5);
    
    pos = host.find("wss://");
    if (pos == 0)
    {
        host.erase(0,6);
        useSSL = true;
    }
    
    pos = host.find(":");
    if (pos != std::string::npos) port = atoi(host.substr(pos+1, host.size()).c_str());
    
    pos = host.find("/", 0);
    std::string path = "/";
    if (pos != std::string::npos) path += host.substr(pos + 1, host.size());
    
    pos = host.find(":");
    if(pos != std::string::npos){
        host.erase(pos, host.size());
    }else if((pos = host.find("/")) != std::string::npos) {
    	host.erase(pos, host.size());
    }
    
    _host = host;
    _port = port;
    _path = path;
    _SSLConnection = useSSL ? 1 : 0;
    
    LOGD("[WebSocket::init] _host: %s, _port: %d, _path: %s", _host.c_str(), _port, _path.c_str());

    size_t protocolCount = 0;
    if (protocols && protocols->size() > 0)
    {
        protocolCount = protocols->size();
    }
    else
    {
        protocolCount = 1;
    }
    
	_wsProtocols = new lws_protocols[protocolCount+1];
	memset(_wsProtocols, 0, sizeof(lws_protocols)*(protocolCount+1));

    if (protocols && protocols->size() > 0)
    {
        int i = 0;
        for (std::vector<std::string>::const_iterator iter = protocols->begin(); iter != protocols->end(); ++iter, ++i)
        {
            char* name = new char[(*iter).length()+1];
            strcpy(name, (*iter).c_str());
            _wsProtocols[i].name = name;
            _wsProtocols[i].callback = WebSocketCallbackWrapper::onSocketCallback;
        }
    }
    else
    {
        char* name = new char[20];
        strcpy(name, "default-protocol");
        _wsProtocols[0].name = name;
        _wsProtocols[0].callback = WebSocketCallbackWrapper::onSocketCallback;
    }
    
    // WebSocket thread needs to be invoked at the end of this method.
    _wsHelper = new (std::nothrow) WsThreadHelper();
    ret = _wsHelper->createThread(*this);
    
    return ret;
}

void WebSocket::send(const std::string& message)
{
    if (_readyState == State::OPEN)
    {
        // In main thread
        Data* data = new (std::nothrow) Data();
        data->bytes = (char*)malloc(message.length() + 1);
        // Make sure the last byte is '\0'
        data->bytes[message.length()] = '\0';
        strcpy(data->bytes, message.c_str());
        data->len = static_cast<ssize_t>(message.length());
        
        WsMessage* msg = new (std::nothrow) WsMessage();
        msg->what = WS_MSG_TO_SUBTRHEAD_SENDING_STRING;
        msg->obj = data;
        _wsHelper->sendMessageToSubThread(msg);
    }
    else
    {
        LOGD("Couldn't send message since websocket wasn't opened!\n");
    }
}

void WebSocket::send(const unsigned char* binaryMsg, unsigned int len)
{
    if (_readyState == State::OPEN)
    {
        // In main thread
        Data* data = new (std::nothrow) Data();
        if (len == 0)
        {
            // If data length is zero, allocate 1 byte for safe.
            data->bytes = (char*)malloc(1);
            data->bytes[0] = '\0';
        }
        else
        {
            data->bytes = (char*)malloc(len);
            memcpy((void*)data->bytes, (void*)binaryMsg, len);
        }
        data->len = len;
        
        WsMessage* msg = new (std::nothrow) WsMessage();
        msg->what = WS_MSG_TO_SUBTRHEAD_SENDING_BINARY;
        msg->obj = data;
        _wsHelper->sendMessageToSubThread(msg);
    }
    else
    {
        LOGD("Couldn't send message since websocket wasn't opened!\n");
    }
}

void WebSocket::close()
{
    _wsHelper->quitSubThread();
}

WebSocket::State WebSocket::getReadyState()
{
    return _readyState;
}
    
void WebSocket::onSubThreadLoop()
{
    if (_wsContext && _readyState != State::CLOSED && _readyState != State::CLOSING)
    {
        _wsHelper->_subThreadWsMessageQueueMutex.lock();
        bool isEmpty = _wsHelper->_subThreadWsMessageQueue->empty();
        _wsHelper->_subThreadWsMessageQueueMutex.unlock();
        if (!isEmpty)
        {
            lws_callback_on_writable(_wsInstance);
        }
        
        lws_service(_wsContext, 50);
    }
    else
    {
        LOGD("Ready state is closing or was closed, code=%d, quit websocket thread!", _readyState);
        _wsHelper->quitSubThread();
    }
}

static void sighandler(int sig)
{
    LOGD("Websocket: sig=%d got!", sig);
}
    
void WebSocket::onSubThreadStarted()
{
    signal(SIGINT, sighandler);
    
	struct lws_context_creation_info info;
	memset(&info, 0, sizeof info);
	/*
	 * create the websocket context.  This tracks open connections and
	 * knows how to route any traffic and which protocol version to use,
	 * and if each connection is client or server side.
	 *
	 * For this client-only demo, we tell it to not listen on any port.
	 */
    
	info.port = CONTEXT_PORT_NO_LISTEN;
	info.protocols = _wsProtocols;
	info.extensions = lws_get_internal_extensions();

	info.gid = -1;
	info.uid = -1;
    info.options = 0;
    info.user = this;
    
//    int log_level = LLL_ERR | LLL_WARN | LLL_NOTICE /*| LLL_INFO | LLL_DEBUG/* | LLL_PARSER*/ | LLL_HEADER | LLL_EXT | LLL_CLIENT | LLL_LATENCY;
//    lws_set_log_level(log_level, nullptr);
    
	_wsContext = lws_create_context(&info);
    
	if (nullptr != _wsContext)
    {
        _readyState = State::CONNECTING;
        std::string name;
        for (int i = 0; _wsProtocols[i].callback != nullptr; ++i)
        {
            name += (_wsProtocols[i].name);
            
            if (_wsProtocols[i+1].callback != nullptr) name += ", ";
        }
        
        char portStr[10];
        sprintf(portStr, "%d", _port);
        std::string ads_port = _host + ":" + portStr;
        
        _wsInstance = lws_client_connect(_wsContext, _host.c_str(), _port, _SSLConnection,
                                             _path.c_str(), ads_port.c_str(), ads_port.c_str(),
                                             name.c_str(), -1);
        
        if (nullptr == _wsInstance)
        {
            onConnectionError();
        }
	}
    else
    {
        CCLOGERROR("Create websocket context failed!");
    }
}

void WebSocket::onSubThreadEnded()
{
    if (_wsContext != nullptr)
    {
        lws_context_destroy(_wsContext);
    }
}
    
void WebSocket::onClientWritable()
{
    std::lock_guard<std::mutex> lk(_wsHelper->_subThreadWsMessageQueueMutex);
    
    if (_wsHelper->_subThreadWsMessageQueue->empty())
    {
        return;
    }
    
    std::list<WsMessage*>::iterator iter = _wsHelper->_subThreadWsMessageQueue->begin();
    
    ssize_t bytesWrite = 0;
    if (iter != _wsHelper->_subThreadWsMessageQueue->end())
    {
        WsMessage* subThreadMsg = *iter;
        
        Data* data = (Data*)subThreadMsg->obj;
        
        const size_t c_bufferSize = WS_BUFFER_SIZE_WRITE;
        
        size_t remaining = data->len - data->issued;
        size_t n = std::min(remaining, c_bufferSize );

//        LOGD("[websocket:send] total: %d, sent: %d, remaining: %d, buffer size: %d", static_cast<int>(data->len), static_cast<int>(data->issued), static_cast<int>(remaining), static_cast<int>(n));
        
        unsigned char buf[LWS_SEND_BUFFER_PRE_PADDING + n + LWS_SEND_BUFFER_POST_PADDING];
        if (n > 0)
            memcpy((char*)&buf[LWS_SEND_BUFFER_PRE_PADDING], data->bytes + data->issued, n);
        
        int writeProtocol;
        
        if (data->issued == 0)
        {
            if (WS_MSG_TO_SUBTRHEAD_SENDING_STRING == subThreadMsg->what)
            {
                writeProtocol = LWS_WRITE_TEXT;
            }
            else
            {
                writeProtocol = LWS_WRITE_BINARY;
            }
            
            // If we have more than 1 fragment
            if (data->len > c_bufferSize)
                writeProtocol |= LWS_WRITE_NO_FIN;
        } else {
            // we are in the middle of fragments
            writeProtocol = LWS_WRITE_CONTINUATION;
            // and if not in the last fragment
            if (remaining != n)
                writeProtocol |= LWS_WRITE_NO_FIN;
        }
        
        bytesWrite = lws_write(_wsInstance,  &buf[LWS_SEND_BUFFER_PRE_PADDING], n, (lws_write_protocol)writeProtocol);
        
        // Handle the result of lws_write
        // Buffer overrun?
        if (bytesWrite < 0)
        {
            LOGD("ERROR: msg(%u), lws_write return: %ld\n", subThreadMsg->id, bytesWrite);
            lws_callback_on_writable(_wsInstance);
        }
        // Do we have another fragments to send?
        else if (remaining > bytesWrite)
        {
            LOGD("msg(%u) append: %ld + %ld = %ld\n", subThreadMsg->id, data->issued, bytesWrite, data->issued + bytesWrite);
            data->issued += bytesWrite;
            
            lws_callback_on_writable(_wsInstance);
        }
        // Safely done!
        else
        {
            if (remaining == bytesWrite)
            {
                LOGD("msg(%u) append: %ld + %ld = %ld\n", subThreadMsg->id, data->issued, bytesWrite, data->issued + bytesWrite);
                LOGD("msg(%u) was totally sent!\n", subThreadMsg->id);
            }
            else
            {
                LOGD("ERROR: msg(%u), remaining(%ld) < byteWrite(%ld)\n", subThreadMsg->id, remaining, bytesWrite);
                LOGD("Drop the msg(%u)\n", subThreadMsg->id);
            }
            
            CC_SAFE_FREE(data->bytes);
            CC_SAFE_DELETE(data);
            _wsHelper->_subThreadWsMessageQueue->erase(iter);
            CC_SAFE_DELETE(subThreadMsg);
            
            LOGD("-----------------------------------------------------------\n");
        }
    }
}

void WebSocket::onClientReceivedData(void* in, ssize_t len)
{
    // In websocket thread
    static int packageIndex = 0;
    packageIndex++;
    if (in != nullptr && len > 0)
    {
        LOGD("Receiving data:index:%d, len=%ld\n", packageIndex, len);
        
        unsigned char* inData = (unsigned char*)in;
        _receivedData.insert(_receivedData.end(), inData, inData + len);
    }
    else
    {
        LOGD("Emtpy message received!\n");
    }
    
    // If no more data pending, send it to the client thread
    size_t remainingSize = lws_remaining_packet_payload(_wsInstance);
    int isFinalFragment = lws_is_final_fragment(_wsInstance);
//    LOGD("remainingSize: %ld, isFinalFragment: %d\n", remainingSize, isFinalFragment);
    
    if (remainingSize == 0 && isFinalFragment)
    {
        std::vector<char> frameData = std::move(_receivedData);
        
        // reset capacity of received data buffer
        _receivedData.reserve(WS_BUFFER_SIZE_RECEIVE);
        
        ssize_t frameSize = frameData.size();
        
        bool isBinary = lws_frame_is_binary(_wsInstance);

        if (!isBinary)
        {
            frameData.push_back('\0');
        }
        
        _wsHelper->sendMessageToUIThread([this, frameData, frameSize, isBinary](){
            // In UI thread
            LOGD("Notify data len %ld to Cocos thread.\n", frameSize);
            
            Data data;
            data.isBinary = isBinary;
            data.bytes = (char*)frameData.data();
            data.len = frameSize;
            
            _delegate->onMessage(this, data);
        });
    }
}
    
void WebSocket::onConnectionOpened()
{
    /*
     * start the ball rolling,
     * LWS_CALLBACK_CLIENT_WRITEABLE will come next service
     */
    lws_callback_on_writable(_wsInstance);
    
    _readyState = State::OPEN;
    
    _wsHelper->sendMessageToUIThread([this](){
        _delegate->onOpen(this);
    });
}
    
void WebSocket::onConnectionError()
{
    _readyState = State::CLOSING;
    
    _wsHelper->sendMessageToUIThread([this](){
        _delegate->onError(this, ErrorCode::CONNECTION_FAILURE);
    });
}
    
void WebSocket::onConnectionClosed()
{
    LOGD("%s", "connection closing..\n");
    if (_readyState == State::CLOSED)
    {
        LOGD("Websocket %p was closed, no need to close it again!", this);
        return;
    }
    
    _readyState = State::CLOSED;
    
    _wsHelper->quitSubThread();
    _wsHelper->sendMessageToUIThread([this](){
        //Waiting for the subThread safety exit
        _wsHelper->joinSubThread();
        _delegate->onClose(this);
    });
}
    
int WebSocket::onSocketCallback(struct lws *wsi,
                     int reason,
                     void *user, void *in, ssize_t len)
{
	//LOGD("socket callback for %d reason", reason);
    
	switch (reason)
    {
        case LWS_CALLBACK_DEL_POLL_FD:
        case LWS_CALLBACK_PROTOCOL_DESTROY:
        case LWS_CALLBACK_CLIENT_CONNECTION_ERROR:
            {
                if (reason == LWS_CALLBACK_CLIENT_CONNECTION_ERROR
                    || (reason == LWS_CALLBACK_PROTOCOL_DESTROY && _readyState == State::CONNECTING)
                    || (reason == LWS_CALLBACK_DEL_POLL_FD && _readyState == State::CONNECTING)
                    )
                {
                    onConnectionError();
                }
                else if (reason == LWS_CALLBACK_PROTOCOL_DESTROY && _readyState == State::CLOSING)
                {
                    onConnectionClosed();
                }
            }
            break;
        case LWS_CALLBACK_CLIENT_ESTABLISHED:
            onConnectionOpened();
            break;
            
        case LWS_CALLBACK_CLIENT_WRITEABLE:
            onClientWritable();
            break;
            
        case LWS_CALLBACK_CLOSED:
            onConnectionClosed();
            break;
            
        case LWS_CALLBACK_CLIENT_RECEIVE:
            onClientReceivedData(in, len);
            break;
        default:
            break;
	}
    
	return 0;
}

}

NS_CC_END
