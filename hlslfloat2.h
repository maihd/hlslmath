#pragma once

#include "./hlslfloat.h"

inline float2 operator-(float2 v)
{
    return float2(-v.x, -v.y);
}

inline const float2& operator+(float2 v)
{
    return v;
}

inline float2& operator--(float2& v)
{
    --v.x;
    --v.y;
    return v;
}

inline float2& operator++(float2& v)
{
    ++v.x;
    ++v.y;
    return v;
}

inline const float2& operator--(float2& v, int)
{
    v.x--;
    v.y--;
    return v;
}

inline const float2& operator++(float2& v, int)
{
    v.x++;
    v.y++;
    return v;
}

inline float2 operator+(float2 a, float2 b)
{
    return float2(a.x + b.x, a.y + b.y);
}

inline float2 operator-(float2 a, float2 b)
{
    return float2(a.x - b.x, a.y - b.y);
}

inline float2 operator*(float2 a, float2 b)
{
    return float2(a.x * b.x, a.y * b.y);
}

inline float2 operator/(float2 a, float2 b)
{
    return float2(a.x / b.x, a.y / b.y);
}

inline float2 operator+(float2 a, float b)
{
    return float2(a.x + b, a.y + b);
}

inline float2 operator-(float2 a, float b)
{
    return float2(a.x - b, a.y - b);
}

inline float2 operator*(float2 a, float b)
{
    return float2(a.x * b, a.y * b);
}

inline float2 operator/(float2 a, float b)
{
    return float2(a.x / b, a.y / b);
}

inline float2 operator+(float a, float2 b)
{
    return float2(a + b.x, a + b.y);
}

inline float2 operator-(float a, float2 b)
{
    return float2(a - b.x, a - b.y);
}

inline float2 operator*(float a, float2 b)
{
    return float2(a * b.x, a * b.y);
}

inline float2 operator/(float a, float2 b)
{
    return float2(a / b.x, a / b.y);
}

inline bool2 operator==(float2 a, float2 b)
{
    return bool2(a.x == b.x, a.y == b.y);
}

inline bool2 operator!=(float2 a, float2 b)
{
    return bool2(a.x != b.x, a.y != b.y);
}

inline bool2 operator<(float2 a, float2 b)
{
    return bool2(a.x < b.x, a.y < b.y);
}

inline bool2 operator>(float2 a, float2 b)
{
    return bool2(a.x > b.x, a.y > b.y);
}

inline bool2 operator<=(float2 a, float2 b)
{
    return bool2(a.x <= b.x, a.y <= b.y);
}

inline bool2 operator>=(float2 a, float2 b)
{
    return bool2(a.x >= b.x, a.y >= b.y);
}

inline float2 cos(float2 v)
{
    return float2(cos(v.x), cos(v.y));
}

inline float2 sin(float2 v)
{
    return float2(sin(v.x), sin(v.y));
}

inline float2 tan(float2 v)
{
    return float2(tan(v.x), tan(v.y));
}

inline float2 acos(float2 v)
{
    return float2(acos(v.x), acos(v.y));
}

inline float2 asin(float2 v)
{
    return float2(asin(v.x), asin(v.y));
}

inline float2 atan(float2 v)
{
    return float2(atan(v.x), atan(v.y));
}

inline float2 cosh(float2 v)
{
    return float2(cosh(v.x), cosh(v.y));
}

inline float2 sinh(float2 v)
{
    return float2(sinh(v.x), sinh(v.y));
}

inline float2 tanh(float2 v)
{
    return float2(tanh(v.x), tanh(v.y));
}

inline float2 exp(float2 v)
{
    return float2(
        exp(v.x),
        exp(v.y)  
    );
}

inline float2 exp2(float2 v)
{
    return float2(
        exp2(v.x),
        exp2(v.y)  
    );
}

inline float2 log(float2 v)
{
    return float2(
        log(v.x),
        log(v.y)  
    );
}

inline float2 log2(float2 v)
{
    return float2(
        log2(v.x),
        log2(v.y)  
    );
}

inline float2 log10(float2 v)
{
    return float2(
        log10(v.x),
        log10(v.y)  
    );
}

inline float2 pow(float2 a, float2 b)
{
    return float2(
        pow(a.x, b.x),
        pow(a.y, b.y)  
    );
}

inline float2 sqrt(float2 v)
{
    return float2(
        sqrt(v.x),
        sqrt(v.y)  
    );
}

inline float2 rsqrt(float2 v)
{
    return float2(
        rsqrt(v.x),
        rsqrt(v.y)  
    );
}

inline float2 min(float2 a, float2 b)
{
    return float2(
        min(a.x, b.x),
        min(a.y, b.y));
}

inline float2 max(float2 a, float2 b)
{
    return float2(
        max(a.x, b.x), 
        max(a.y, b.y));
}

inline float2 clamp(float2 v, float2 min, float2 max)
{
    return float2(
        clamp(v.x, min.x, max.x), 
        clamp(v.y, min.y, max.y));
}

inline float2 step(float2 a, float2 b)
{
    return float2(
        step(a.x, b.x),
        step(a.y, b.y)
    );
}

inline float2 lerp(float2 a, float2 b, float2 t)
{
    return float2(
        lerp(a.x, b.x, t.x),
        lerp(a.y, b.y, t.y)  
    );
}

inline float2 smoothstep(float2 a, float2 b, float2 t)
{
    return float2(
        smoothstep(a.x, b.x, t.x),
        smoothstep(a.y, b.y, t.y)  
    );
}

inline float dot(float2 a, float2 b)
{
    return a.x * b.x + a.y * b.y;
}

inline float lengthsquared(float2 v)
{
    return dot(v, v);
}

inline float length(float2 v)
{
    return sqrtf(lengthsquared(v));
}

inline float distance(float2 a, float2 b)
{
    return length(a - b);
}

inline float distancesquared(float2 a, float2 b)
{
    return lengthsquared(a - b);
}

inline float2 normalize(float2 v)
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

inline float2 reflect(float2 v, float2 n)
{
    return v - 2.0f * dot(v, n) * n;
}

inline float2 refract(float2 v, float2 n, float eta)
{
    const float k = 1.0f - eta * eta * (1.0f - dot(v, n) * dot(v, n));
    return k < 0.0f
        ? float2(0.0f)
        : eta * v - (eta * dot(v, n) + sqrt(k)) * v;
}

inline float2 faceforward(float2 n, float2 i, float2 nref)
{
    return dot(i, nref) < 0.0f ? n : -n;
}