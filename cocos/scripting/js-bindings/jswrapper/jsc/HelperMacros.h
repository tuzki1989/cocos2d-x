#pragma once

#include "../config.hpp"

#ifdef SCRIPT_ENGINE_JSC

#ifdef __GNUC__
#define SE_UNUSED __attribute__ ((unused))
#else
#define SE_UNUSED
#endif

#define SAFE_ADD_REF(obj) if (obj != nullptr) obj->addRef()

#define SAFE_RELEASE(obj) if (obj != nullptr) obj->release()


#define SE_DECLARE_FUNC(funcName) \
    JSValueRef funcName(JSContextRef cx, JSObjectRef _function, JSObjectRef _thisObject, size_t argc, const JSValueRef _argv[], JSValueRef* exception)

#define SE_FUNC_BEGIN(funcName) \
    JSValueRef funcName(JSContextRef cx, JSObjectRef _function, JSObjectRef _thisObject, size_t _argc, const JSValueRef _argv[], JSValueRef* exception) \
    { \
        unsigned short argc = (unsigned short) _argc; \
        JSValueRef _jsRet = JSValueMakeUndefined(cx); \
        SE_UNUSED bool ret = true; \
        se::ValueArray args; \
        se::internal::jsToSeArgs(cx, argc, _argv, &args); \
        se::Object* thisObject = nullptr; \
        void* _nativeObj = JSObjectGetPrivate(_thisObject); \
        if (_nativeObj != nullptr) \
        { \
            thisObject = se::Object::getObjectWithPtr(_nativeObj); \
        }


#define SE_FUNC_END \
        for (auto& v : args) \
        { \
            if (v.isObject() && v.toObject()->isRooted()) \
            { \
                v.toObject()->switchToUnrooted(); \
            } \
        } \
        SAFE_RELEASE(thisObject); \
        return _jsRet; \
    }

#define SE_FINALIZE_FUNC_BEGIN(funcName) \
    void funcName(JSObjectRef _obj) \
    { \
        void* nativeThisObject = JSObjectGetPrivate(_obj); \
        se::Object* _thisObject = nullptr; \
        if (nativeThisObject != nullptr) \
        { \
            _thisObject = se::Object::getObjectWithPtr(nativeThisObject); \
            if (_thisObject) _thisObject->_cleanup(); \
            JSObjectSetPrivate(_obj, nullptr); \
            SAFE_RELEASE(_thisObject); \
            SAFE_RELEASE(_thisObject); \
        }

#define SE_FINALIZE_FUNC_END \
    }

// --- Constructor
#define SE_CTOR_BEGIN(funcName, clsName) \
    JSObjectRef funcName(JSContextRef cx, JSObjectRef constructor, size_t argc, const JSValueRef _argv[], JSValueRef* _exception) \
    { \
        SE_UNUSED bool ret = true; \
        se::ValueArray args; \
        se::internal::jsToSeArgs(cx, argc, _argv, &args); \
        se::Object* thisObject = se::Object::createObject(clsName, false); \
        JSObjectRef _jsRet = thisObject->_getJSObject();

#define SE_CTOR_END \
        SAFE_RELEASE(thisObject); \
        return _jsRet; \
    }

// --- Get Property

#define SE_GET_PROPERTY_BEGIN(funcName) \
    JSValueRef funcName(JSContextRef cx, JSObjectRef _object, JSStringRef _propertyName, JSValueRef* _exception) \
    { \
        JSValueRef _jsRet = JSValueMakeUndefined(cx); \
        SE_UNUSED bool ret = true; \
        void* _nativeObj = JSObjectGetPrivate(_object); \
        se::Object* thisObject = nullptr; \
        if (_nativeObj != nullptr) \
        { \
            thisObject = se::Object::getObjectWithPtr(_nativeObj); \
        }

#define SE_GET_PROPERTY_END \
        SAFE_RELEASE(thisObject); \
        return _jsRet; \
    }

#define SE_SET_RVAL(data) \
    se::internal::seToJsValue(cx, data, &_jsRet)

// --- Set Property

#define SE_SET_PROPERTY_BEGIN(funcName) \
    bool funcName(JSContextRef cx, JSObjectRef _object, JSStringRef _propertyName, JSValueRef _value, JSValueRef* _exception) \
    { \
        bool ret = true; \
        void* _nativeObj = JSObjectGetPrivate(_object); \
        se::Object* thisObject = nullptr; \
        if (_nativeObj != nullptr) \
        { \
            thisObject = se::Object::getObjectWithPtr(_nativeObj); \
        } \
        se::Value data; \
        se::internal::jsToSeValue(cx, _value, &data);

#define SE_SET_PROPERTY_END \
        SAFE_RELEASE(thisObject); \
        return ret; \
    }

#endif // #ifdef SCRIPT_ENGINE_JSC
