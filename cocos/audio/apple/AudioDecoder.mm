#include "AudioDecoder.h"
#include "AudioMacros.h"

#define LOG_TAG "AudioDecoder"

namespace cocos2d { namespace experimental {

    AudioDecoder::AudioDecoder()
    : _isOpened(false)
    , _extRef(nullptr)
    , _totalFrames(0)
    , _bytesPerFrame(0)
    , _sampleRate(0)
    , _channelCount(0)
    {
        memset(&_outputFormat, 0, sizeof(_outputFormat));
    }

    AudioDecoder::~AudioDecoder()
    {
        close();
    }

    bool AudioDecoder::open(const char* path)
    {
        bool ret = false;
        CFURLRef fileURL = nil;
        do
        {
            BREAK_IF_ERR_LOG(path == nullptr || strlen(path) == 0, "Invalid path!");

            NSString *fileFullPath = [[NSString alloc] initWithCString:path encoding:NSUTF8StringEncoding];
            fileURL = (CFURLRef)[[NSURL alloc] initFileURLWithPath:fileFullPath];
            [fileFullPath release];
            BREAK_IF_ERR_LOG(fileURL == nil, "Converting path to CFURLRef failed!");

            OSStatus status = ExtAudioFileOpenURL(fileURL, &_extRef);
            BREAK_IF_ERR_LOG(status != noErr, "ExtAudioFileOpenURL FAILED, Error = %ld", (long)ret);

            AudioStreamBasicDescription	fileFormat;
            UInt32 propertySize = sizeof(fileFormat);

            // Get the audio data format
            ret = ExtAudioFileGetProperty(_extRef, kExtAudioFileProperty_FileDataFormat, &propertySize, &fileFormat);
            BREAK_IF_ERR_LOG(status != noErr, "ExtAudioFileGetProperty(kExtAudioFileProperty_FileDataFormat) FAILED, Error = %ld", (long)ret);
            BREAK_IF_ERR_LOG(fileFormat.mChannelsPerFrame > 2, "Unsupported Format, channel count is greater than stereo!");

            // Set the client format to 16 bit signed integer (native-endian) data
            // Maintain the channel count and sample rate of the original source format
            _outputFormat.mSampleRate = fileFormat.mSampleRate;
            _outputFormat.mChannelsPerFrame = fileFormat.mChannelsPerFrame;
            _outputFormat.mFormatID = kAudioFormatLinearPCM;
            _outputFormat.mFramesPerPacket = 1;
            _outputFormat.mBitsPerChannel = 16;
            _outputFormat.mFormatFlags = kAudioFormatFlagsNativeEndian | kAudioFormatFlagIsPacked | kAudioFormatFlagIsSignedInteger;

            _sampleRate = _outputFormat.mSampleRate;
            _channelCount = _outputFormat.mChannelsPerFrame;
            _bytesPerFrame = 2 * _outputFormat.mChannelsPerFrame;

            _outputFormat.mBytesPerPacket = _bytesPerFrame;
            _outputFormat.mBytesPerFrame = _bytesPerFrame;

            ret = ExtAudioFileSetProperty(_extRef, kExtAudioFileProperty_ClientDataFormat, sizeof(_outputFormat), &_outputFormat);
            BREAK_IF_ERR_LOG(status != noErr, "ExtAudioFileSetProperty FAILED, Error = %ld", (long)ret);

            // Get the total frame count
            SInt64 totalFrames = 0;
            propertySize = sizeof(totalFrames);
            ret = ExtAudioFileGetProperty(_extRef, kExtAudioFileProperty_FileLengthFrames, &propertySize, &totalFrames);
            BREAK_IF_ERR_LOG(status != noErr, "ExtAudioFileGetProperty(kExtAudioFileProperty_FileLengthFrames) FAILED, Error = %ld", (long)ret);
            _totalFrames = static_cast<uint32_t>(totalFrames);
            _isOpened = true;

            ret = true;
        } while (false);

        if (fileURL != nil)
            CFRelease(fileURL);

        if (!ret)
        {
            close();
        }

        return ret;
    }

    void AudioDecoder::close()
    {
        if (_extRef != nullptr)
        {
            ExtAudioFileDispose(_extRef);
            _extRef = nullptr;

            _totalFrames = 0;
            _bytesPerFrame = 0;
            _sampleRate = 0;
            _channelCount = 0;
        }
    }

    uint32_t AudioDecoder::read(uint32_t framesToRead, char* pcmBuf)
    {
        uint32_t ret = 0;
        do
        {
            BREAK_IF_ERR_LOG(!isOpened(), "decoder isn't openned");
            BREAK_IF_ERR_LOG(framesToRead == INVALID_FRAME_INDEX, "frameToRead is INVALID_FRAME_INDEX");
            BREAK_IF_ERR_LOG(framesToRead == 0, "frameToRead is 0");
            BREAK_IF_ERR_LOG(pcmBuf == nullptr, "pcmBuf is nullptr");

            AudioBufferList bufferList;
            bufferList.mNumberBuffers = 1;
            bufferList.mBuffers[0].mDataByteSize = framesToRead * _bytesPerFrame;
            bufferList.mBuffers[0].mNumberChannels = _outputFormat.mChannelsPerFrame;
            bufferList.mBuffers[0].mData = pcmBuf;

            UInt32 frames = framesToRead;
            OSStatus status = ExtAudioFileRead(_extRef, &frames, &bufferList);
            BREAK_IF(status != noErr);
            ret = frames;
        } while (false);

        return ret;
    }

    bool AudioDecoder::seek(uint32_t frameIndex)
    {
        bool ret = false;
        do
        {
            BREAK_IF_ERR_LOG(!isOpened(), "decoder isn't openned");
            BREAK_IF_ERR_LOG(frameIndex == INVALID_FRAME_INDEX, "frameIndex is INVALID_FRAME_INDEX");

            OSStatus status = ExtAudioFileSeek(_extRef, frameIndex);
            BREAK_IF(status != noErr);
            ret = true;
        } while(false);
        return ret;
    }

    uint32_t AudioDecoder::tell()
    {
        uint32_t ret = INVALID_FRAME_INDEX;
        do
        {
            BREAK_IF_ERR_LOG(!isOpened(), "decoder isn't openned");
            SInt64 frameIndex = INVALID_FRAME_INDEX;
            OSStatus status = ExtAudioFileTell(_extRef, &frameIndex);
            BREAK_IF(status != noErr);
            ret = static_cast<uint32_t>(frameIndex);
        } while(false);

        return ret;
    }

    uint32_t AudioDecoder::getTotalFrames()
    {
        return _totalFrames;
    }

    uint32_t AudioDecoder::getBytesPerFrame()
    {
        return _bytesPerFrame;
    }

    uint32_t AudioDecoder::getSampleRate()
    {
        return _sampleRate;
    }

    uint32_t AudioDecoder::getChannelCount()
    {
        return _channelCount;
    }

    bool AudioDecoder::isOpened()
    {
        return _isOpened;
    }

}} // namespace cocos2d { namespace experimental {
