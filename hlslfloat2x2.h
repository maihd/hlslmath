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

inline float2x2 inverse(const float2x2& m)
{
    const float det = m[0][0] * m[1][1] - m[0][1] * m[1][0];
    if (det == 0.0f)
    {
        return m;
    }
    else
    {
        const float idet = 1.0f / det;

        return float2x2(
            idet *   m[1][1] , idet * (-m[0][1]),
            idet * (-m[1][0]), idet *   m[0][0]
        );
    }
}

inline float2x2 transpose(const float2x2& m)
{
    return float2x2(
        m[0][0], m[1][0],
        m[0][1], m[1][1]
    );
}

inline float2 mul(const float2x2& a, const float2& b)
{
    return float2(
        a[0][0] * b[0] + a[1][0] * b[1],
        a[0][1] * b[0] + a[1][1] * b[1]
    );
}

inline float2 mul(const float2& a, const float2x2& b)
{
    return float2(
        a[0] * b[0][0] + a[1] * b[0][1],
        a[0] * b[1][0] + a[1] * b[1][1]
    );
}

inline float2x2 mul(const float2x2& a, const float2x2& b)
{
    return float2x2(
        mul(a, b[0]),
        mul(a, b[1])
    );
}

inline float2x2 float2x2::rotate(float angle)
{
    const float s = sin(angle);
    const float c = cos(angle);

    return float2x2(
        c, -s,
        s, c
    );
}