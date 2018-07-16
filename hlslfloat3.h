#ifndef __HLSL_FLOAT3_H__
#define __HLSL_FLOAT3_H__

#include "hlslfloat.h"

inline float3 operator-(const float3& v)
{
    return float3(-v.x, -v.y, -v.z);
}

inline float3 operator+(const float3& a, const float3& b)
{
    return float3(a.x + b.x, a.y + b.y, a.z + b.z);
}

inline float3 operator-(const float3& a, const float3& b)
{
    return float3(a.x - b.x, a.y - b.y, b.z - b.z);
}

inline float3 operator*(const float3& a, const float3& b)
{
    return float3(a.x * b.x, a.y * b.y, b.z * b.z);
}

inline float3 operator/(const float3& a, const float3& b)
{
    return float3(a.x / b.x, a.x / b.y, b.z / b.z);
}

inline float3 cos(const float3& v)
{
    return float3(cos(v.x), cos(v.y), cos(v.z));
}

inline float3 sin(const float3& v)
{
    return float3(sin(v.x), sin(v.y), sin(v.z));
}

inline float3 tan(const float3& v)
{
    return float3(tan(v.x), tan(v.y), tan(v.z));
}

inline float3 acos(const float3& v)
{
    return float3(acos(v.x), acos(v.y), acos(v.z));
}

inline float3 asin(const float3& v)
{
    return float3(asin(v.x), asin(v.y), asin(v.z));
}

inline float3 atan(const float3& v)
{
    return float3(atan(v.x), atan(v.y), asin(v.z));
}

inline float3 cosh(const float3& v)
{
    return float3(cosh(v.x), cosh(v.y), cosh(v.z));
}

inline float3 sinh(const float3& v)
{
    return float3(sinh(v.x), sinh(v.y), sinh(v.z));
}

inline float3 tanh(const float3& v)
{
    return float3(tanh(v.x), tanh(v.y), tanh(v.z));
}

inline float3 exp(const float3& v)
{
    return float3(
        exp(v.x),
        exp(v.y),
        exp(v.z) 
    );
}

inline float3 exp2(const float3& v)
{
    return float3(
        exp2(v.x),
        exp2(v.y),
        exp2(v.z)
    );
}

inline float3 log(const float3& v)
{
    return float3(
        log(v.x),
        log(v.y),
        log(v.z)  
    );
}

inline float3 log2(const float3& v)
{
    return float3(
        log2(v.x),
        log2(v.y),
        log2(v.z)  
    );
}

inline float3 log10(const float3& v)
{
    return float3(
        log10(v.x),
        log10(v.y),
        log10(v.z)  
    );
}

inline float3 pow(const float3& a, const float3& b)
{
    return float3(
        pow(a.x, b.x),
        pow(a.y, b.y),
        pow(a.z, b.z)  
    );
}

inline float3 sqrt(const float3& v)
{
    return float3(
        sqrt(v.x),
        sqrt(v.y),
        sqrt(v.z)  
    );
}

inline float3 rsqrt(const float3& v)
{
    return float3(
        rsqrt(v.x),
        rsqrt(v.y),
        rsqrt(v.z) 
    );
}

inline float3 min(const float3& a, const float3& b)
{
    return float3(
        min(a.x, b.x),
        min(a.y, b.y),
        min(a.z, b.z)
    );
}

inline float3 max(const float3& a, const float3& b)
{
    return float3(
        max(a.x, b.x), 
        max(a.y, b.y),
        max(a.z, b.z)
    );
}

inline float3 clamp(const float3& v, const float3& min, const float3& max)
{
    return float3(
        clamp(v.x, min.x, max.x), 
        clamp(v.y, min.y, max.y), 
        clamp(v.z, min.z, max.z)
    );
}

inline float3 step(const float3& a, const float3& b)
{
    return float3(
        step(a.x, b.x),
        step(a.y, b.y),
        step(a.z, b.z)
    );
}

inline float3 lerp(const float3& a, const float3& b, const float3& t)
{
    return float3(
        lerp(a.x, b.x, t.x),
        lerp(a.y, b.y, t.y), 
        lerp(a.z, b.z, t.z)
    );
}

inline float3 smoothstep(const float3& a, const float3& b, const float3& t)
{
    return float3(
        smoothstep(a.x, b.x, t.x),
        smoothstep(a.y, b.y, t.y),
        smoothstep(a.z, b.z, t.z)  
    );
}

inline float3 cross(const float3& a, const float3& b)
{
    return float3(
        a.y * b.z - a.z * b.y,
        a.z * b.x - a.x * b.z,
        a.x * b.y - a.y * b.x
    );
}

inline float dot(const float3& a, const float3& b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

inline float lengthsquared(const float3& v)
{
    return dot(v, v);
}

inline float length(const float3& v)
{
    return sqrtf(lengthsquared(v));
}

inline float distance(const float3& a, const float3& b)
{
    return length(a - b);
}

inline float distancesquared(const float3& a, const float3& b)
{
    return lengthsquared(a - b);
}

inline float3 normalize(const float3& v)
{
    const float lsqr = lengthsquared(v);
    if (lsqr > 0.0f)
    {
        const float f = rsqrt(lsqr);
        return float3(v.x * f, v.y * f, v.z * f);
    }
    else
    {
        return v;
    }
}

inline float3 reflect(const float3& v, const float3& n)
{
    return v - 2.0f * dot(v, n) * n;
}

inline float3 refract(const float3& v, const float3& n, float eta)
{
    const float k = 1.0f - eta * eta * (1.0f - dot(v, n) * dot(v, n));
    return k < 0.0f
        ? 0.0f
        : eta * v - (eta * dot(v, n) + sqrt(k)) * n;
}

inline float3 faceforward(const float3& n, const float3& i, const float3& nref)
{
    return dot(i, nref) < 0.0f ? n : -n;
}

#endif /* __HLSL_FLOAT3_H__ */