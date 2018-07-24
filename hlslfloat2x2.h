#pragma once

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
    --m[0];
    --m[1];
    return m;
}

inline float2x2& operator++(float2x2& m)
{
    ++m[0];
    ++m[1];
    return m;
}

inline const float2x2& operator--(float2x2& m, int)
{
    m[0]--;
    m[1]--;
    return m;
}

inline const float2x2& operator++(float2x2& m, int)
{
    m[0]++;
    m[1]++;
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
    return result;
}

inline bool2x2 operator>=(const float2x2& a, const float2x2& b)
{
    bool2x2 result;
    result[0] = a[0] >= b[0];
    result[1] = a[1] >= b[1];
    return result;
}