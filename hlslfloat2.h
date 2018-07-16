#ifndef __HLSL_FLOAT2_H__
#define __HLSL_FLOAT2_H__

#include "hlslcommon.h"

inline float2 neg(const float2& v)
{
    return float2(-v.x, -v.y);
}

inline float2 add(const float2& a, const float2& b)
{
    return float2(a.x + b.x, a.y + b.y);
}

inline float2 sub(const float2& a, const float2& b)
{
    return float2(a.x - b.x, a.y - b.y);
}

inline float2 mul(const float2& a, const float2& b)
{
    return float2(a.x * b.x, a.y * b.y);
}

inline float2 div(const float2& a, const float2& b)
{
    return float2(a.x / b.x, a.x / b.y);
}

inline float2 cos(const float2& v)
{
    return float2(cos(v.x), cos(v.y));
}

inline float2 sin(const float2& v)
{
    return float2(sin(v.x), sin(v.y));
}

inline float2 tan(const float2& v)
{
    return float2(tan(v.x), tan(v.y));
}

inline float2 acos(const float2& v)
{
    return float2(acos(v.x), acos(v.y));
}

inline float2 asin(const float2& v)
{
    return float2(asin(v.x), asin(v.y));
}

inline float2 atan(const float2& v)
{
    return float2(atan(v.x), atan(v.y));
}

inline float2 cosh(const float2& v)
{
    return float2(cosh(v.x), cosh(v.y));
}

inline float2 sinh(const float2& v)
{
    return float2(sinh(v.x), sinh(v.y));
}

inline float2 tanh(const float2& v)
{
    return float2(tanh(v.x), tanh(v.y));
}

inline float2 exp(const float2& v)
{
    return float2(
        exp(v.x),
        exp(v.y)  
    );
}

inline float2 exp2(const float2& v)
{
    return float2(
        exp2(v.x),
        exp2(v.y)  
    );
}

inline float2 log(const float2& v)
{
    return float2(
        log(v.x),
        log(v.y)  
    );
}

inline float2 log2(const float2& v)
{
    return float2(
        log2(v.x),
        log2(v.y)  
    );
}

inline float2 log10(const float2& v)
{
    return float2(
        log10(v.x),
        log10(v.y)  
    );
}

inline float2 pow(const float2& a, const float2& b)
{
    return float2(
        pow(a.x, b.x),
        pow(a.y, b.y)  
    );
}

inline float2 sqrt(const float2& v)
{
    return float2(
        sqrt(v.x),
        sqrt(v.y)  
    );
}

inline float2 rsqrt(const float2& v)
{
    return float2(
        rsqrt(v.x),
        rsqrt(v.y)  
    );
}

inline float2 min(const float2& a, const float2& b)
{
    return float2(
        min(a.x, b.x),
        min(a.y, b.y));
}

inline float2 max(const float2& a, const float2& b)
{
    return float2(
        max(a.x, b.x), 
        max(a.y, b.y));
}

inline float2 clamp(const float2& v, const float2& min, const float2& max)
{
    return float2(
        clamp(v.x, min.x, max.x), 
        clamp(v.y, min.y, max.y));
}

inline float2 step(const float2& a, const float2& b)
{
    return float2(
        step(a.x, b.x),
        step(a.y, b.y)
    );
}

inline float2 lerp(const float2& a, const float2& b, const float2& t)
{
    return float2(
        lerp(a.x, b.x, t.x),
        lerp(a.y, b.y, t.y)  
    );
}

inline float2 smoothstep(const float2& a, const float2& b, const float2& t)
{
    return float2(
        smoothstep(a.x, b.x, t.x),
        smoothstep(a.y, b.y, t.y)  
    );
}

inline float dot(const float2& a, const float2& b)
{
    return a.x * b.x + a.y * b.y;
}

inline float lengthsquared(const float2& v)
{
    return dot(v, v);
}

inline float length(const float2& v)
{
    return sqrtf(lengthsquared(v));
}

inline float distance(const float2& a, const float2& b)
{
    return length(sub(a, b));
}

inline float distancesquared(const float2& a, const float2& b)
{
    return lengthsquared(sub(a, b));
}

inline float2 normalize(const float2& v)
{
    const float lsqr = lengthsquared(v);
    if (lsqr > 0.0f)
    {
        const float f = rsqrt(lsqr);
        return float2(v.x * f, v.y * f);
    }
    else
    {
        return v;
    }
}

inline float2 reflect(const float2& v, const float2& n)
{
    return sub(v, mul(n, 2.0f * dot(v, n)));
}

inline float2 refract(const float2& v, const float2& n, float eta)
{
    const float k = 1.0f - eta * eta * (1.0f - dot(v, n) * dot(v, n));
    return k < 0.0f
        ? 0.0f
        : sub(mul(v, eta), mul(v, eta * dot(v, n) + sqrt(k)));
}

inline float2 faceforward(const float2& n, const float2& i, const float2& nref)
{
    return dot(i, nref) < 0.0f ? n : neg(n);
}

#endif /* __HLSL_FLOAT2_H__ */