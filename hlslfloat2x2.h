#ifndef __HLSL_FLOAT2X2_H__
#define __HLSL_FLOAT2X2_H__

#include "hlslfloat.h"
#include "hlslfloat2.h"

inline float2x2 operator-(const float2x2& m)
{
    float2x2 result;
    result[0] = -m[0];
    result[1] = -m[1];
    return result;
}

inline const float2x2& operator+(const float2x2& m)
{
    return m;
}

inline float2x2& operator--(float2x2& m)
{
    return m;
}

inline float2x2& operator++(float2x2& m)
{
    return m;
}

inline float2x2 operator+(const float2x2& a, const float2x2& b)
{
    float2x2 result;
    result[0] = a[0] + b[0];
    result[1] = a[1] + b[1];
    return result;
}

inline float2x2 operator-(const float2x2& a, const float2x2& b)
{
    float2x2 result;
    result[0] = a[0] - b[0];
    result[1] = a[1] - b[1];
    return result;
}

inline float2x2 operator*(const float2x2& a, const float2x2& b)
{
    float2x2 result;
    result[0] = a[0] * b[0];
    result[1] = a[1] * b[1];
    return result;
}

inline float2x2 operator/(const float2x2& a, const float2x2& b)
{
    float2x2 result;
    result[0] = a[0] / b[0];
    result[1] = a[1] / b[1];
    return result;
}

inline float2x2 operator+(const float2x2& a, float b)
{
    float2x2 result;
    result[0] = a[0] + b;
    result[1] = a[1] + b;
    return result;
}

inline float2x2 operator-(const float2x2& a, float b)
{
    float2x2 result;
    result[0] = a[0] - b;
    result[1] = a[1] - b;
    return result;
}

inline float2x2 operator*(const float2x2& a, float b)
{
    float2x2 result;
    result[0] = a[0] * b;
    result[1] = a[1] * b;
    return result;
}

inline float2x2 operator/(const float2x2& a, float b)
{
    float2x2 result;
    result[0] = a[0] / b;
    result[1] = a[1] / b;
    return result;
}

inline float2x2 operator+(float a, const float2x2& b)
{
    float2x2 result;
    result[0] = a + b[0];
    result[1] = a + b[1];
    return result;
}

inline float2x2 operator-(float a, const float2x2& b)
{
    float2x2 result;
    result[0] = a - b[0];
    result[1] = a - b[1];
    return result;
}

inline float2x2 operator*(float a, const float2x2& b)
{
    float2x2 result;
    result[0] = a * b[0];
    result[1] = a * b[1];
    return result;
}

inline float2x2 operator/(float a, const float2x2& b)
{
    float2x2 result;
    result[0] = a / b[0];
    result[1] = a / b[1];
    return result;
}

inline bool2x2 operator==(const float2x2& a, const float2x2& b)
{
    bool2x2 result;
    result[0] = a[0] == b[0];
    result[1] = a[1] == b[1];
    return result;
}

inline bool2x2 operator!=(const float2x2& a, const float2x2& b)
{
    bool2x2 result;
    result[0] = a[0] != b[0];
    result[1] = a[1] != b[1];
    return result;
}

inline bool2x2 operator<(const float2x2& a, const float2x2& b)
{
    bool2x2 result;
    result[0] = a[0] < b[0];
    result[1] = a[1] < b[1];
    return result;
}

inline bool2x2 operator>(const float2x2& a, const float2x2& b)
{
    bool2x2 result;
    result[0] = a[0] > b[0];
    result[1] = a[1] > b[1];
    return result;
}

inline bool2x2 operator<=(const float2x2& a, const float2x2& b)
{
    bool2x2 result;
    result[0] = a[0] <= b[0];
    result[1] = a[1] <= b[1];
    result[2] = a[2] <= b[2];
    result[3] = a[3] <= b[3];
    return result;
}

inline bool2x2 operator>=(const float2x2& a, const float2x2& b)
{
    bool2x2 result;
    result[0] = a[0] >= b[0];
    result[1] = a[1] >= b[1];
    return result;
}

#endif /* __HLSL_FLOAT2X2_H__ */