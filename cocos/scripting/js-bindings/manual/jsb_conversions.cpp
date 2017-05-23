//
//  jsb_conversions.cpp
//  cocos2d_js_bindings
//
//  Created by James Chen on 5/17/17.
//
//

#include "jsb_conversions.hpp"

bool seval_to_int32(const se::Value& v, int32_t* ret)
{
    *ret = v.toInt32(); //FIXME: need to check isNan?
    return true;
}

bool seval_to_uint32(const se::Value& v, uint32_t* ret)
{
    *ret = v.toUint32();
    return true;
}

bool seval_to_int8(const se::Value& v, int8_t* ret)
{
    *ret = v.toInt8();
    return true;
}

bool seval_to_uint8(const se::Value& v, uint8_t* ret)
{
    *ret = v.toUint8();
    return true;
}

bool seval_to_int16(const se::Value& v, int16_t* ret)
{
    *ret = v.toInt16();
    return true;
}

bool seval_to_uint16(const se::Value& v, uint16_t* ret)
{
    *ret = v.toUint16();
    return true;
}

bool seval_to_boolean(const se::Value& v, bool* ret)
{
    *ret = v.toBoolean();
    return true;
}

bool seval_to_float(const se::Value& v, float* ret)
{
    *ret = v.toFloat();
    return true;
}

bool seval_to_double(const se::Value& v, double* ret)
{
    *ret = v.toNumber();
    return true;
}

bool seval_to_long(const se::Value& v, long* ret)
{
    *ret = v.toLong();
    return true;
}

bool seval_to_ulong(const se::Value& v, unsigned long* ret)
{
    *ret = v.toUlong();
    return true;
}

bool seval_to_longlong(const se::Value& v, long long* ret)
{
    *ret = (long long)v.toLong();
    return true;
}

bool seval_to_ssize(const se::Value& v, ssize_t* ret)
{
    *ret = (ssize_t)v.toLong();
    return true;
}

bool seval_to_std_string(const se::Value& v, std::string* ret)
{
    *ret = v.toString();
    return true;
}

bool seval_to_Vec2(const se::Value& v, cocos2d::Vec2* pt)
{
    assert(v.isObject() && pt != nullptr);
    se::Object* obj = v.toObject();
    se::Value x;
    se::Value y;
    bool ok = obj->getProperty("x", &x);
    JSB_PRECONDITION3(ok && x.isNumber(), false , "Error processing arguments");
    ok = obj->getProperty("y", &y);
    JSB_PRECONDITION3(ok && y.isNumber(), false , "Error processing arguments");
    pt->x = x.toFloat();
    pt->y = y.toFloat();
    return true;
}

bool seval_to_Vec3(const se::Value& v, cocos2d::Vec3* pt)
{
    assert(v.isObject() && pt != nullptr);
    se::Object* obj = v.toObject();
    se::Value x;
    se::Value y;
    se::Value z;
    bool ok = obj->getProperty("x", &x);
    JSB_PRECONDITION3(ok && x.isNumber(), false , "Error processing arguments");
    ok = obj->getProperty("y", &y);
    JSB_PRECONDITION3(ok && y.isNumber(), false , "Error processing arguments");
    ok = obj->getProperty("z", &z);
    JSB_PRECONDITION3(ok && z.isNumber(), false , "Error processing arguments");
    pt->x = x.toFloat();
    pt->y = y.toFloat();
    pt->z = z.toFloat();
    return true;
}

bool seval_to_Vec4(const se::Value& v, cocos2d::Vec4* pt)
{
    assert(v.isObject() && pt != nullptr);
    se::Object* obj = v.toObject();
    se::Value x;
    se::Value y;
    se::Value z;
    se::Value w;
    bool ok = obj->getProperty("x", &x);
    JSB_PRECONDITION3(ok && x.isNumber(), false , "Error processing arguments");
    ok = obj->getProperty("y", &y);
    JSB_PRECONDITION3(ok && y.isNumber(), false , "Error processing arguments");
    ok = obj->getProperty("z", &z);
    JSB_PRECONDITION3(ok && z.isNumber(), false , "Error processing arguments");
    ok = obj->getProperty("w", &w);
    JSB_PRECONDITION3(ok && w.isNumber(), false , "Error processing arguments");
    pt->x = x.toFloat();
    pt->y = y.toFloat();
    pt->z = z.toFloat();
    pt->w = w.toFloat();
    return true;
}

bool seval_to_Mat4(const se::Value& v, cocos2d::Mat4* mat)
{
    assert(v.isObject() && mat != nullptr);

    JSB_PRECONDITION3(v.toObject()->isArray(), false, "Matrix object must be an Array");

    se::Object* obj = v.toObject();

    bool ok = false;
    uint32_t len = 0;
    ok = obj->getArrayLength(&len);
    JSB_PRECONDITION3(ok, false, "getArrayLength failed!");

    if (len != 16)
    {
        SE_REPORT_ERROR("Array length error: %d, was expecting 16", len);
        return false;
    }

    se::Value tmp;
    for (uint32_t i = 0; i < len; ++i)
    {
        ok = obj->getArrayElement(i, &tmp);
        JSB_PRECONDITION3(ok, false, "getArrayElement failed!");

        if (tmp.isNumber())
        {
            mat->m[i] = tmp.toFloat();
        }
        else
        {
            SE_REPORT_ERROR("%u, not supported type in matrix", i);
            return false;
        }

        tmp.setUndefined();
    }

    return true;
}

bool seval_to_Size(const se::Value& v, cocos2d::Size* size)
{
    assert(v.isObject() && size != nullptr);
    se::Object* obj = v.toObject();
    se::Value width;
    se::Value height;

    bool ok = obj->getProperty("width", &width);
    JSB_PRECONDITION3(ok && width.isNumber(), false , "Error processing arguments");
    ok = obj->getProperty("height", &height);
    JSB_PRECONDITION3(ok && height.isNumber(), false , "Error processing arguments");
    size->width = width.toFloat();
    size->height = height.toFloat();
    return true;
}

bool seval_to_Rect(const se::Value& v, cocos2d::Rect* rect)
{
    assert(v.isObject() && rect != nullptr);
    se::Object* obj = v.toObject();
    se::Value x;
    se::Value y;
    se::Value width;
    se::Value height;

    bool ok = obj->getProperty("x", &x);
    JSB_PRECONDITION3(ok && x.isNumber(), false , "Error processing arguments");
    ok = obj->getProperty("y", &y);
    JSB_PRECONDITION3(ok && y.isNumber(), false , "Error processing arguments");
    ok = obj->getProperty("width", &width);
    JSB_PRECONDITION3(ok && width.isNumber(), false , "Error processing arguments");
    ok = obj->getProperty("height", &height);
    JSB_PRECONDITION3(ok && height.isNumber(), false , "Error processing arguments");
    rect->origin.x = x.toFloat();
    rect->origin.y = y.toFloat();
    rect->size.width = width.toFloat();
    rect->size.height = height.toFloat();

    return true;
}

bool seval_to_Color3B(const se::Value& v, cocos2d::Color3B* color)
{
    assert(v.isObject() && color != nullptr);
    se::Object* obj = v.toObject();
    se::Value r;
    se::Value g;
    se::Value b;
    bool ok = obj->getProperty("r", &r);
    JSB_PRECONDITION3(ok && r.isNumber(), false , "Error processing arguments");
    ok = obj->getProperty("g", &g);
    JSB_PRECONDITION3(ok && g.isNumber(), false , "Error processing arguments");
    ok = obj->getProperty("b", &b);
    JSB_PRECONDITION3(ok && b.isNumber(), false , "Error processing arguments");
    color->r = (GLubyte)r.toUint16();
    color->g = (GLubyte)g.toUint16();
    color->b = (GLubyte)b.toUint16();
    return true;
}

bool seval_to_Color4B(const se::Value& v, cocos2d::Color4B* color)
{
    assert(v.isObject() && color != nullptr);
    se::Object* obj = v.toObject();
    se::Value r;
    se::Value g;
    se::Value b;
    se::Value a;
    bool ok = obj->getProperty("r", &r);
    JSB_PRECONDITION3(ok && r.isNumber(), false , "Error processing arguments");
    ok = obj->getProperty("g", &g);
    JSB_PRECONDITION3(ok && g.isNumber(), false , "Error processing arguments");
    ok = obj->getProperty("b", &b);
    JSB_PRECONDITION3(ok && b.isNumber(), false , "Error processing arguments");
    ok = obj->getProperty("a", &a);
    JSB_PRECONDITION3(ok && b.isNumber(), false , "Error processing arguments");
    color->r = (GLubyte)r.toUint16();
    color->g = (GLubyte)g.toUint16();
    color->b = (GLubyte)b.toUint16();
    color->a = (GLubyte)a.toUint16();
    return true;
}

bool seval_to_Color4F(const se::Value& v, cocos2d::Color4F* color)
{
    assert(v.isObject() && color != nullptr);
    se::Object* obj = v.toObject();
    se::Value r;
    se::Value g;
    se::Value b;
    se::Value a;
    bool ok = obj->getProperty("r", &r);
    JSB_PRECONDITION3(ok && r.isNumber(), false , "Error processing arguments");
    ok = obj->getProperty("g", &g);
    JSB_PRECONDITION3(ok && g.isNumber(), false , "Error processing arguments");
    ok = obj->getProperty("b", &b);
    JSB_PRECONDITION3(ok && b.isNumber(), false , "Error processing arguments");
    ok = obj->getProperty("a", &a);
    JSB_PRECONDITION3(ok && b.isNumber(), false , "Error processing arguments");
    color->r = r.toFloat();
    color->g = g.toFloat();
    color->b = b.toFloat();
    color->a = a.toFloat();
    return true;
}

bool seval_to_ccvalue(const se::Value& v, cocos2d::Value* ret)
{
    assert(ret != nullptr);
    if (v.isObject())
    {
        se::Object* jsobj = v.toObject();
        if (!jsobj->isArray())
        {
            // It's a normal js object.
            cocos2d::ValueMap dictVal;
            bool ok = seval_to_ccvaluemap(v, &dictVal);
            if (ok)
            {
                *ret = cocos2d::Value(dictVal);
            }
        }
        else
        {
            // It's a js array object.
            cocos2d::ValueVector arrVal;
            bool ok = seval_to_ccvaluevector(v, &arrVal);
            if (ok)
            {
                *ret = cocos2d::Value(arrVal);
            }
        }
    }
    else if (v.isString())
    {
        *ret = v.toString();
    }
    else if (v.isNumber())
    {
        *ret = v.toNumber();
    }
    else if (v.isBoolean())
    {
        *ret = v.toBoolean();
    }
    else
    {
        CCASSERT(false, "not supported type");
    }

    return true;
}

bool seval_to_ccvaluemap(const se::Value& v, cocos2d::ValueMap* ret)
{
    if (v.isNullOrUndefined())
        return false;

    assert(v.isObject());

    se::Object* obj = v.toObject();

    cocos2d::ValueMap& dict = *ret;

    std::vector<std::string> allKeys;
    if (!obj->getAllKeys(&allKeys))
    {
        CCLOGERROR("Can't get keys for obj: %p", obj);
        return false;
    }

    bool ok = false;
    se::Value value;
    cocos2d::Value ccvalue;
    for (const auto& key : allKeys)
    {
        if (!obj->getProperty(key.c_str(), &value))
        {
            ret->clear();
            return false;
        }

        ok = seval_to_ccvalue(value, &ccvalue);
        if (!ok)
        {
            ret->clear();
            return false;
        }

        dict.emplace(key, ccvalue);
    }

    return true;
}

static bool isNumberString(const std::string& str)
{
    for (const auto& c : str)
    {
        if (!isdigit(c))
            return false;
    }
    return true;
}

bool seval_to_ccvaluemapintkey(const se::Value& v, cocos2d::ValueMapIntKey* ret)
{
    if (v.isNullOrUndefined())
        return false;

    assert(v.isObject());

    se::Object* obj = v.toObject();

    cocos2d::ValueMapIntKey& dict = *ret;

    std::vector<std::string> allKeys;
    if (!obj->getAllKeys(&allKeys))
    {
        CCLOGERROR("Can't get keys for obj: %p", obj);
        return false;
    }

    bool ok = false;
    se::Value value;
    cocos2d::Value ccvalue;
    for (const auto& key : allKeys)
    {
        if (!obj->getProperty(key.c_str(), &value))
        {
            ret->clear();
            return false;
        }

        if (!isNumberString(key))
        {
            CCLOGWARN("seval_to_ccvaluemapintkey, found not numeric key: %s", key.c_str());
            continue;
        }

        int intKey = atoi(key.c_str());

        ok = seval_to_ccvalue(value, &ccvalue);
        if (!ok)
        {
            ret->clear();
            return false;
        }

        dict.emplace(intKey, ccvalue);
    }
    
    return true;
}

bool seval_to_ccvaluevector(const se::Value& v,  cocos2d::ValueVector* ret)
{
    assert(ret != nullptr);

    assert(v.isObject());

    se::Object* obj = v.toObject();
    JSB_PRECONDITION3(obj->isArray(), false, "Object must be an array");

    uint32_t len = 0;
    obj->getArrayLength(&len);

    bool ok = false;
    se::Value value;
    cocos2d::Value ccvalue;
    for (uint32_t i = 0; i < len; ++i)
    {
        if (obj->getArrayElement(i, &value))
        {
            ok = seval_to_ccvalue(value, &ccvalue);
            if (!ok)
            {
                ret->clear();
                return false;
            }

            ret->push_back(ccvalue);
        }
    }
    
    return true;
}

bool sevals_variadic_to_ccvaluevector(const se::ValueArray& args, cocos2d::ValueVector* ret)
{
    bool ok = false;
    cocos2d::Value ccvalue;

    for (const auto& arg : args)
    {
        ok = seval_to_ccvalue(arg, &ccvalue);
        if (!ok)
        {
            ret->clear();
            return false;
        }

        ret->push_back(ccvalue);
    }

    return true;
}

bool seval_to_blendfunc(const se::Value& v, cocos2d::BlendFunc* ret)
{
    assert(v.isObject());
    se::Object* obj = v.toObject();
    se::Value value;

    if (!obj->getProperty("src", &value))
        return false;
    ret->src = value.toUint32();

    if (!obj->getProperty("dst", &value))
        return false;
    ret->dst = value.toUint32();
    return true;
}

bool seval_to_std_vector_string(const se::Value& v, std::vector<std::string>* ret)
{
    assert(ret != nullptr);
    assert(v.isObject());
    se::Object* obj = v.toObject();
    assert(obj->isArray());
    uint32_t len = 0;
    if (obj->getArrayLength(&len))
    {
        se::Value value;
        for (uint32_t i = 0; i < len; ++i)
        {
            if (!obj->getArrayElement(i, &value))
            {
                ret->clear();
                return false;
            }

            assert(value.isString());
            ret->push_back(value.toString());
        }
        return true;
    }

    ret->clear();
    return false;
}

bool seval_to_std_vector_int(const se::Value& v, std::vector<int>* ret)
{
    assert(ret != nullptr);
    assert(v.isObject());
    se::Object* obj = v.toObject();
    assert(obj->isArray());
    uint32_t len = 0;
    if (obj->getArrayLength(&len))
    {
        se::Value value;
        for (uint32_t i = 0; i < len; ++i)
        {
            if (!obj->getArrayElement(i, &value))
            {
                ret->clear();
                return false;
            }

            assert(value.isNumber());
            ret->push_back(value.toInt32());
        }
        return true;
    }

    ret->clear();
    return false;
}

bool seval_to_std_vector_float(const se::Value& v, std::vector<float>* ret)
{
    assert(ret != nullptr);
    assert(v.isObject());
    se::Object* obj = v.toObject();
    assert(obj->isArray());
    uint32_t len = 0;
    if (obj->getArrayLength(&len))
    {
        se::Value value;
        for (uint32_t i = 0; i < len; ++i)
        {
            if (!obj->getArrayElement(i, &value))
            {
                ret->clear();
                return false;
            }

            assert(value.isNumber());
            ret->push_back(value.toFloat());
        }
        return true;
    }

    ret->clear();
    return false;
}

bool seval_to_std_vector_Vec2(const se::Value& v, std::vector<cocos2d::Vec2>* ret)
{
    assert(ret != nullptr);
    assert(v.isObject());
    se::Object* obj = v.toObject();
    assert(obj->isArray());
    uint32_t len = 0;
    if (obj->getArrayLength(&len))
    {
        se::Value value;
        cocos2d::Vec2 pt;
        for (uint32_t i = 0; i < len; ++i)
        {
            if (!obj->getArrayElement(i, &value) || !seval_to_Vec2(value, &pt))
            {
                ret->clear();
                return false;
            }

            ret->push_back(pt);
        }
        return true;
    }

    ret->clear();
    return false;
}

bool seval_to_FontDefinition(const se::Value& v, cocos2d::FontDefinition* ret)
{
    assert(ret != nullptr);
    assert(v.isObject());
    se::Object* obj = v.toObject();

    // default values
    const char* defautlFontName = "Arial";
    const int defaultFontSize = 32;
    cocos2d::TextHAlignment defaultTextAlignment = cocos2d::TextHAlignment::LEFT;
    cocos2d::TextVAlignment defaultTextVAlignment = cocos2d::TextVAlignment::TOP;

    // by default shadow and stroke are off
    ret->_shadow._shadowEnabled = false;
    ret->_stroke._strokeEnabled = false;

    // white text by default
    ret->_fontFillColor = cocos2d::Color3B::WHITE;

    se::Value tmp, tmp2;

    // font name
    if (obj->getProperty("fontName", &tmp) && tmp.isString())
    {
        if (tmp.toString().empty())
        {
            ret->_fontName = defautlFontName;
        }
        else
        {
            ret->_fontName = tmp.toString();
        }
    }
    else
    {
        ret->_fontName = defautlFontName;
    }

    // font size
    if (obj->getProperty("fontSize", &tmp) && tmp.isNumber())
    {
        ret->_fontSize = tmp.toInt32();
    }
    else
    {
        ret->_fontSize = defaultFontSize;
    }

    // font alignment horizontal
    if (obj->getProperty("textAlign", &tmp) && tmp.isNumber())
    {
        ret->_alignment = (cocos2d::TextHAlignment)tmp.toInt32();
    }
    else
    {
        ret->_alignment = defaultTextAlignment;
    }

    // font alignment vertical
    if (obj->getProperty("verticalAlign", &tmp) && tmp.isNumber())
    {
        ret->_vertAlignment = (cocos2d::TextVAlignment)tmp.toInt32();
    }
    else
    {
        ret->_vertAlignment = defaultTextVAlignment;
    }

    // font fill color
    if (obj->getProperty("fillStyle", &tmp) && tmp.isObject())
    {
        seval_to_Color3B(tmp, &ret->_fontFillColor);
    }

    // font rendering box dimensions
    if (obj->getProperty("boundingWidth", &tmp) && tmp.isNumber()
        && obj->getProperty("boundingHeight", &tmp2) && tmp2.isNumber())
    {
        ret->_dimensions.width = tmp.toFloat();
        ret->_dimensions.height = tmp2.toFloat();
    }

    // shadow
    if (obj->getProperty("shadowEnabled", &tmp) && tmp.isBoolean())
    {
        ret->_shadow._shadowEnabled = tmp.toBoolean();

        if (ret->_shadow._shadowEnabled)
        {
            // default shadow values
            ret->_shadow._shadowOffset  = cocos2d::Size(5, 5);
            ret->_shadow._shadowBlur    = 1;
            ret->_shadow._shadowOpacity = 1;

            // shadow offset
            if (obj->getProperty("shadowOffsetX", &tmp) && tmp.isNumber()
                && obj->getProperty("shadowOffsetY", &tmp2) && tmp2.isNumber())
            {
                ret->_shadow._shadowOffset.width = tmp.toFloat();
                ret->_shadow._shadowOffset.height = tmp2.toFloat();
            }

            // shadow blur
            if (obj->getProperty("shadowBlur", &tmp) && tmp.isNumber())
            {
                ret->_shadow._shadowBlur = tmp.toNumber();
            }

            // shadow intensity
            if (obj->getProperty("shadowOpacity", &tmp) && tmp.isNumber())
            {
                ret->_shadow._shadowOpacity = tmp.toNumber();
            }
        }
    }

    // stroke
    if (obj->getProperty("strokeEnabled", &tmp) && tmp.isBoolean())
    {
        ret->_stroke._strokeEnabled = tmp.toBoolean();
        if (ret->_stroke._strokeEnabled)
        {
            // default stroke values
            ret->_stroke._strokeSize  = 1;
            ret->_stroke._strokeColor = cocos2d::Color3B::BLUE;

            // stroke color
            if (obj->getProperty("strokeStyle", &tmp) && tmp.isObject())
            {
                seval_to_Color3B(tmp, &ret->_stroke._strokeColor);
            }

            // stroke size
            if (obj->getProperty("lineWidth", &tmp) && tmp.isNumber())
            {
                ret->_stroke._strokeSize = tmp.toNumber();
            }

            // stroke alpha
            if (obj->getProperty("strokeAlpha", &tmp) && tmp.isNumber())
            {
                ret->_stroke._strokeAlpha = tmp.toUint8();
            }
        }
    }

    return true;
}

bool seval_to_Acceleration(const se::Value& v, cocos2d::Acceleration* ret)
{
    assert(ret != nullptr);
    assert(v.isObject());
    se::Object* obj = v.toObject();
    bool ok = false;
    se::Value tmp;

    ok = obj->getProperty("x", &tmp);
    JSB_PRECONDITION3(ok && tmp.isNumber(), false, "Error processing arguments");
    ret->x = tmp.toNumber();

    ok = obj->getProperty("y", &tmp);
    JSB_PRECONDITION3(ok && tmp.isNumber(), false, "Error processing arguments");
    ret->y = tmp.toNumber();

    ok = obj->getProperty("z", &tmp);
    JSB_PRECONDITION3(ok && tmp.isNumber(), false, "Error processing arguments");
    ret->z = tmp.toNumber();

    ok = obj->getProperty("timestamp", &tmp);
    JSB_PRECONDITION3(ok && tmp.isNumber(), false, "Error processing arguments");
    ret->timestamp = tmp.toNumber();

    return true;
}

bool seval_to_Quaternion(const se::Value& v, cocos2d::Quaternion* ret)
{
    assert(ret != nullptr);
    assert(v.isObject());
    se::Object* obj = v.toObject();
    bool ok = false;
    se::Value tmp;

    ok = obj->getProperty("x", &tmp);
    JSB_PRECONDITION3(ok && tmp.isNumber(), false, "Error processing arguments");
    ret->x = tmp.toFloat();

    ok = obj->getProperty("y", &tmp);
    JSB_PRECONDITION3(ok && tmp.isNumber(), false, "Error processing arguments");
    ret->y = tmp.toFloat();

    ok = obj->getProperty("z", &tmp);
    JSB_PRECONDITION3(ok && tmp.isNumber(), false, "Error processing arguments");
    ret->z = tmp.toFloat();

    ok = obj->getProperty("w", &tmp);
    JSB_PRECONDITION3(ok && tmp.isNumber(), false, "Error processing arguments");
    ret->w = tmp.toFloat();

    return true;
}

//////////////////////////////////////////////////////////////////////////////////

bool int32_to_seval(int32_t v, se::Value* ret)
{
    ret->setInt32(v);
    return true;
}

bool uint32_to_seval(uint32_t v, se::Value* ret)
{
    ret->setUint32(v);
    return true;
}

bool uint16_to_seval(uint16_t v, se::Value* ret)
{
    ret->setUint16(v);
    return true;
}

bool uint8_to_seval(uint8_t v, se::Value* ret)
{
    ret->setUint8(v);
    return true;
}

bool boolean_to_seval(bool v, se::Value* ret)
{
    ret->setBoolean(v);
    return true;
}

bool float_to_seval(float v, se::Value* ret)
{
    ret->setFloat(v);
    return true;
}

bool double_to_seval(double v, se::Value* ret)
{
    ret->setNumber(v);
    return true;
}

bool long_to_seval(long v, se::Value* ret)
{
    ret->setLong(v);
    return true;
}

bool ulong_to_seval(unsigned long v, se::Value* ret)
{
    ret->setUlong(v);
    return true;
}

bool longlong_to_seval(long long v, se::Value* ret)
{
    ret->setLong((long)v);
    return true;
}

bool ssize_to_seval(ssize_t v, se::Value* ret)
{
    ret->setLong((long)v);
    return true;
}

bool std_string_to_seval(const std::string& v, se::Value* ret)
{
    ret->setString(v);
    return true;
}

bool Vec2_to_seval(const cocos2d::Vec2& v, se::Value* ret)
{
    assert(ret != nullptr);
    se::Object* obj = se::Object::createPlainObject(false);
    obj->setProperty("x", se::Value(v.x));
    obj->setProperty("y", se::Value(v.y));
    ret->setObject(obj);
    obj->release();

    return true;
}

bool Vec3_to_seval(const cocos2d::Vec3& v, se::Value* ret)
{
    assert(ret != nullptr);
    se::Object* obj = se::Object::createPlainObject(false);
    obj->setProperty("x", se::Value(v.x));
    obj->setProperty("y", se::Value(v.y));
    obj->setProperty("z", se::Value(v.z));
    ret->setObject(obj);
    obj->release();

    return true;
}

bool Vec4_to_seval(const cocos2d::Vec4& v, se::Value* ret)
{
    assert(ret != nullptr);
    se::Object* obj = se::Object::createPlainObject(false);
    obj->setProperty("x", se::Value(v.x));
    obj->setProperty("y", se::Value(v.y));
    obj->setProperty("z", se::Value(v.z));
    obj->setProperty("w", se::Value(v.w));
    ret->setObject(obj);
    obj->release();

    return true;
}

bool Mat4_to_seval(const cocos2d::Mat4& v, se::Value* ret)
{
    assert(ret != nullptr);
    se::Object* obj = se::Object::createArrayObject(16, false);

    for (uint8_t i = 0; i < 16; ++i)
    {
        obj->setArrayElement(i, se::Value(v.m[i]));
    }

    ret->setObject(obj);
    obj->release();
    return true;
}

bool Color3B_to_seval(const cocos2d::Color3B& v, se::Value* ret)
{
    assert(ret != nullptr);
    se::Object* obj = se::Object::createPlainObject(false);
    obj->setProperty("r", se::Value(v.r));
    obj->setProperty("g", se::Value(v.g));
    obj->setProperty("b", se::Value(v.b));
    ret->setObject(obj);
    obj->release();

    return true;
}

bool Color4B_to_seval(const cocos2d::Color4B& v, se::Value* ret)
{
    assert(ret != nullptr);
    se::Object* obj = se::Object::createPlainObject(false);
    obj->setProperty("r", se::Value(v.r));
    obj->setProperty("g", se::Value(v.g));
    obj->setProperty("b", se::Value(v.b));
    obj->setProperty("a", se::Value(v.a));
    ret->setObject(obj);
    obj->release();

    return true;
}

bool Color4F_to_seval(const cocos2d::Color4F& v, se::Value* ret)
{
    assert(ret != nullptr);
    se::Object* obj = se::Object::createPlainObject(false);
    obj->setProperty("r", se::Value(v.r));
    obj->setProperty("g", se::Value(v.g));
    obj->setProperty("b", se::Value(v.b));
    obj->setProperty("a", se::Value(v.a));
    ret->setObject(obj);
    obj->release();

    return true;
}

bool ccvalue_to_seval(const cocos2d::Value& v, se::Value* ret)
{
    assert(ret != nullptr);
    bool ok = true;
    switch (v.getType())
    {
        case cocos2d::Value::Type::BOOLEAN:
            ret->setBoolean(v.asBool());
            break;
        case cocos2d::Value::Type::FLOAT:
        case cocos2d::Value::Type::DOUBLE:
            ret->setNumber(v.asDouble());
            break;
        case cocos2d::Value::Type::INTEGER:
            ret->setInt32(v.asInt());
            break;
        case cocos2d::Value::Type::STRING:
            ret->setString(v.asString());
            break;
        case cocos2d::Value::Type::VECTOR:
            ok = ccvaluevector_to_seval(v.asValueVector(), ret);
            break;
        case cocos2d::Value::Type::MAP:
            ok = ccvaluemap_to_seval(v.asValueMap(), ret);
            break;
        case cocos2d::Value::Type::INT_KEY_MAP:
            ok = ccvaluemapintkey_to_seval(v.asIntKeyMap(), ret);
            break;
        default:
            ok = false;
            break;
    }

    return ok;
}

bool ccvaluemap_to_seval(const cocos2d::ValueMap& v, se::Value* ret)
{
    assert(ret != nullptr);

    se::Object* obj = se::Object::createPlainObject(false);
    bool ok = true;
    for (const auto& e : v)
    {
        const std::string& key = e.first;
        const cocos2d::Value& value = e.second;

        if (key.empty())
            continue;

        se::Value tmp;
        if (!ccvalue_to_seval(value, &tmp))
        {
            ok = false;
            break;
        }

        obj->setProperty(key.c_str(), tmp);
    }
    ret->setObject(obj);
    obj->release();

    return ok;
}

bool ccvaluemapintkey_to_seval(const cocos2d::ValueMapIntKey& v, se::Value* ret)
{
    assert(ret != nullptr);

    se::Object* obj = se::Object::createPlainObject(false);
    bool ok = true;
    for (const auto& e : v)
    {
        std::stringstream keyss;
        keyss << e.first;
        std::string key = keyss.str();
        const cocos2d::Value& value = e.second;

        if (key.empty())
            continue;

        se::Value tmp;
        if (!ccvalue_to_seval(value, &tmp))
        {
            ok = false;
            break;
        }

        obj->setProperty(key.c_str(), tmp);
    }
    ret->setObject(obj);
    obj->release();

    return ok;
}

bool ccvaluevector_to_seval(const cocos2d::ValueVector& v, se::Value* ret)
{
    assert(ret != nullptr);
    se::Object* obj = se::Object::createArrayObject(v.size(), false);
    bool ok = true;

    uint32_t i = 0;
    for (const auto& value : v)
    {
        se::Value tmp;
        if (!ccvalue_to_seval(value, &tmp))
        {
            ok = false;
            break;
        }

        obj->setArrayElement(i, tmp);
        ++i;
    }
    ret->setObject(obj);
    obj->release();
    return ok;
}

bool blendfunc_to_seval(const cocos2d::BlendFunc& v, se::Value* ret)
{
    assert(ret != nullptr);
    se::Object* obj = se::Object::createPlainObject(false);
    obj->setProperty("src", se::Value(v.src));
    obj->setProperty("dst", se::Value(v.dst));
    ret->setObject(obj);
    obj->release();

    return true;
}

namespace {

    template<typename T>
    bool std_vector_T_to_seval(const std::vector<T>& v, se::Value* ret)
    {
        assert(ret != nullptr);
        se::Object* obj = se::Object::createArrayObject(v.size(), false);
        bool ok = true;

        uint32_t i = 0;
        for (const auto& value : v)
        {
            if (!obj->setArrayElement(i, se::Value(value)))
            {
                ok = false;
                break;
            }
            ++i;
        }

        ret->setObject(obj);
        
        obj->release();
        return ok;
    }

}

bool std_vector_string_to_seval(const std::vector<std::string>& v, se::Value* ret)
{
    return std_vector_T_to_seval(v, ret);
}

bool std_vector_int_to_seval(const std::vector<int>& v, se::Value* ret)
{
    return std_vector_T_to_seval(v, ret);
}

bool std_vector_float_to_seval(const std::vector<float>& v, se::Value* ret)
{
    return std_vector_T_to_seval(v, ret);
}

bool uniform_to_seval(const cocos2d::Uniform& v, se::Value* ret)
{
    assert(ret != nullptr);
    se::Object* obj = se::Object::createPlainObject(false);
    obj->setProperty("location", se::Value(v.location));
    obj->setProperty("size", se::Value(v.size));
    obj->setProperty("type", se::Value(v.type));
    obj->setProperty("name", se::Value(v.name));
    ret->setObject(obj);
    obj->release();

    return true;
}

bool FontDefinition_to_seval(const cocos2d::FontDefinition& v, se::Value* ret)
{
    assert(ret != nullptr);
    se::Value tmp;

    se::Object* obj = se::Object::createPlainObject(false);
    bool ok = true;
    do
    {
        obj->setProperty("fontName", se::Value(v._fontName));
        obj->setProperty("fontSize", se::Value(v._fontSize));
        obj->setProperty("textAlign", se::Value((int32_t)v._alignment));
        obj->setProperty("verticalAlign", se::Value((int32_t)v._vertAlignment));

        if (!Color3B_to_seval(v._fontFillColor, &tmp))
        {
            ok = false;
            break;
        }
        obj->setProperty("fillStyle", tmp);
        obj->setProperty("boundingWidth", se::Value(v._dimensions.width));
        obj->setProperty("boundingHeight", se::Value(v._dimensions.height));

        obj->setProperty("shadowEnabled", se::Value(v._shadow._shadowEnabled));
        obj->setProperty("shadowOffsetX", se::Value(v._shadow._shadowOffset.width));
        obj->setProperty("shadowOffsetY", se::Value(v._shadow._shadowOffset.height));
        obj->setProperty("shadowBlur", se::Value(v._shadow._shadowBlur));
        obj->setProperty("shadowOpacity", se::Value(v._shadow._shadowOpacity));

        obj->setProperty("strokeEnabled", se::Value(v._stroke._strokeEnabled));
        if (!Color3B_to_seval(v._stroke._strokeColor, &tmp))
        {
            ok = false;
            break;
        }

        obj->setProperty("strokeStyle", tmp);
        obj->setProperty("lineWidth", se::Value(v._stroke._strokeSize));
        obj->setProperty("strokeAlpha", se::Value(v._stroke._strokeAlpha));
    } while (false);

    ret->setObject(obj);
    obj->release();

    return ok;
}

bool Acceleration_to_seval(const cocos2d::Acceleration& v, se::Value* ret)
{
    assert(ret != nullptr);
    se::Object* obj = se::Object::createPlainObject(false);
    obj->setProperty("x", se::Value(v.x));
    obj->setProperty("y", se::Value(v.y));
    obj->setProperty("z", se::Value(v.z));
    obj->setProperty("timestamp", se::Value(v.timestamp));
    ret->setObject(obj);
    obj->release();

    return true;
}

bool Quaternion_to_seval(const cocos2d::Quaternion& v, se::Value* ret)
{
    assert(ret != nullptr);
    se::Object* obj = se::Object::createPlainObject(false);
    obj->setProperty("x", se::Value(v.x));
    obj->setProperty("y", se::Value(v.y));
    obj->setProperty("z", se::Value(v.z));
    obj->setProperty("w", se::Value(v.w));
    ret->setObject(obj);
    obj->release();

    return true;
}

