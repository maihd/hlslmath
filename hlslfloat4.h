#ifndef __HLSL_FLOAT4_H__
#define __HLSL_FLOAT4_H__

#include "hlslfloat.h"

inline float4 operator-(const float4& v)
{
    return float4(-v.x, -v.y, -v.z, -v.w);
}

inline float4 operator+(const float4& a, const float4& b)
{
    return float4(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
}

inline float4 operator-(const float4& a, const float4& b)
{
    return float4(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
}

inline float4 operator*(const float4& a, const float4& b)
{
    return float4(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w);
}

inline float4 operator/(const float4& a, const float4& b)
{
    return float4(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
}

inline bool4 operator==(const float4& a, const float4& b)
{
    return bool4(a.x == b.x, a.y == b.y, a.z == b.z, a.w == b.w);
}

inline bool4 operator!=(const float4& a, const float4& b)
{
    return bool4(a.x != b.x, a.y != b.y, a.z != b.z, a.w != b.w);
}

inline bool4 operator<(const float4& a, const float4& b)
{
    return bool4(a.x < b.x, a.y < b.y, a.z < b.z, a.w < b.w);
}

inline bool4 operator>(const float4& a, const float4& b)
{
    return bool4(a.x > b.x, a.y > b.y, a.z > b.z, a.w > b.w);
}

inline bool4 operator<=(const float4& a, const float4& b)
{
    return bool4(a.x <= b.x, a.y <= b.y, a.z <= b.z, a.w <= b.w);
}

inline bool4 operator>=(const float4& a, const float4& b)
{
    return bool4(a.x >= b.x, a.y >= b.y, a.z >= b.z, a.w >= b.w);
}

inline float4 cos(const float4& v)
{
    return float4(cos(v.x), cos(v.y), cos(v.z), cos(v.w));
}

inline float4 sin(const float4& v)
{
    return float4(sin(v.x), sin(v.y), sin(v.z), sin(v.w));
}

inline float4 tan(const float4& v)
{
    return float4(tan(v.x), tan(v.y), tan(v.z), tan(v.w));
}

inline float4 acos(const float4& v)
{
    return float4(acos(v.x), acos(v.y), acos(v.z), acos(v.w));
}

inline float4 asin(const float4& v)
{
    return float4(asin(v.x), asin(v.y), asin(v.z), asin(v.w));
}

inline float4 atan(const float4& v)
{
    return float4(atan(v.x), atan(v.y), atan(v.z), atan(v.w));
}

inline float4 cosh(const float4& v)
{
    return float4(cosh(v.x), cosh(v.y), cosh(v.z), cosh(v.w));
}

inline float4 sinh(const float4& v)
{
    return float4(sinh(v.x), sinh(v.y), sinh(v.z), sinh(v.w));
}

inline float4 tanh(const float4& v)
{
    return float4(tanh(v.x), tanh(v.y), tanh(v.z), tanh(v.w));
}

inline float4 exp(const float4& v)
{
    return float4(
        exp(v.x),
        exp(v.y),
        exp(v.z),
        exp(v.w)
    );
}

inline float4 exp2(const float4& v)
{
    return float4(
        exp2(v.x),
        exp2(v.y),
        exp2(v.z),
        exp2(v.w)
    );
}

inline float4 log(const float4& v)
{
    return float4(
        log(v.x),
        log(v.y),
        log(v.z),
        log(v.w) 
    );
}

inline float4 log2(const float4& v)
{
    return float4(
        log2(v.x),
        log2(v.y),
        log2(v.z),
        log2(v.w)  
    );
}

inline float4 log10(const float4& v)
{
    return float4(
        log10(v.x),
        log10(v.y),
        log10(v.z),
        log10(v.w)  
    );
}

inline float4 pow(const float4& a, const float4& b)
{
    return float4(
        pow(a.x, b.x),
        pow(a.y, b.y),
        pow(a.z, b.z),
        pow(a.w, b.w)  
    );
}

inline float4 sqrt(const float4& v)
{
    return float4(
        sqrt(v.x),
        sqrt(v.y),
        sqrt(v.z),
        sqrt(v.w)  
    );
}

inline float4 rsqrt(const float4& v)
{
    return float4(
        rsqrt(v.x),
        rsqrt(v.y),
        rsqrt(v.z),
        rsqrt(v.w) 
    );
}

inline float4 min(const float4& a, const float4& b)
{
    return float4(
        min(a.x, b.x),
        min(a.y, b.y),
        min(a.z, b.z),
        min(a.w, b.w)
    );
}

inline float4 max(const float4& a, const float4& b)
{
    return float4(
        max(a.x, b.x), 
        max(a.y, b.y),
        max(a.z, b.z),
        max(a.w, b.w)
    );
}

inline float4 clamp(const float4& v, const float4& min, const float4& max)
{
    return float4(
        clamp(v.x, min.x, max.x), 
        clamp(v.y, min.y, max.y), 
        clamp(v.z, min.z, max.z), 
        clamp(v.w, min.w, max.w)
    );
}

inline float4 step(const float4& a, const float4& b)
{
    return float4(
        step(a.x, b.x),
        step(a.y, b.y),
        step(a.z, b.z),
        step(a.w, b.w)
    );
}

inline float4 lerp(const float4& a, const float4& b, const float4& t)
{
    return float4(
        lerp(a.x, b.x, t.x),
        lerp(a.y, b.y, t.y), 
        lerp(a.z, b.z, t.z), 
        lerp(a.w, b.w, t.w)
    );
}

inline float4 smoothstep(const float4& a, const float4& b, const float4& t)
{
    return float4(
        smoothstep(a.x, b.x, t.x),
        smoothstep(a.y, b.y, t.y),
        smoothstep(a.z, b.z, t.z),
        smoothstep(a.w, b.w, t.w)  
    );
}

inline float dot(const float4& a, const float4& b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w;
}

inline float lengthsquared(const float4& v)
{
    return dot(v, v);
}

inline float length(const float4& v)
{
    return sqrtf(lengthsquared(v));
}

inline float distance(const float4& a, const float4& b)
{
    return length(a - b);
}

inline float distancesquared(const float4& a, const float4& b)
{
    return lengthsquared(a - b);
}

inline float4 normalize(const float4& v)
{
    const float lsqr = lengthsquared(v);
    if (lsqr > 0.0f)
    {
        const float f = rsqrt(lsqr);
        return float4(v.x * f, v.y * f, v.z * f, v.w * f);
    }
    else
    {
        return v;
    }
}

inline float4 reflect(const float4& v, const float4& n)
{
    return v - 2.0f * dot(v, n) * n;
}

inline float4 refract(const float4& v, const float4& n, float eta)
{
    const float k = 1.0f - eta * eta * (1.0f - dot(v, n) * dot(v, n));
    return k < 0.0f
        ? 0.0f
        : eta * v - (eta * dot(v, n) + sqrt(k)) * n;
}

inline float4 faceforward(const float4& n, const float4& i, const float4& nref)
{
    return dot(i, nref) < 0.0f ? n : -n;
}

#endif /* __HLSL_FLOAT3_H__ */