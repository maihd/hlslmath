#ifndef __HLSL_FLOAT4X4_H__
#define __HLSL_FLOAT4X4_H__

#include "hlslfloat.h"
#include "hlslfloat4.h"

inline float4x4 operator-(const float4x4& m)
{
    float4x4 result;
    result[0] = -m[0];
    result[1] = -m[1];
    result[2] = -m[2];
    result[3] = -m[3];
    return result;
}

inline float4x4 operator+(const float4x4& a, const float4x4& b)
{
    float4x4 result;
    result[0] = a[0] + b[0];
    result[1] = a[1] + b[1];
    result[2] = a[2] + b[2];
    result[3] = a[3] + b[3];
    return result;
}

inline float4x4 operator-(const float4x4& a, const float4x4& b)
{
    float4x4 result;
    result[0] = a[0] - b[0];
    result[1] = a[1] - b[1];
    result[2] = a[2] - b[2];
    result[3] = a[3] - b[3];
    return result;
}

inline float4x4 operator*(const float4x4& a, const float4x4& b)
{
    float4x4 result;
    result[0] = a[0] * b[0];
    result[1] = a[1] * b[1];
    result[2] = a[2] * b[2];
    result[3] = a[3] * b[3];
    return result;
}

inline float4x4 operator*(const float4x4& a, float b)
{
    float4x4 result;
    result[0] = a[0] * b;
    result[1] = a[1] * b;
    result[2] = a[2] * b;
    result[3] = a[3] * b;
    return result;
}

inline float4x4 operator*(float a, const float4x4& b)
{
    float4x4 result;
    result[0] = a * b[0];
    result[1] = a * b[1];
    result[2] = a * b[2];
    result[3] = a * b[3];
    return result;
}

inline float4x4 operator/(const float4x4& a, const float4x4& b)
{
    float4x4 result;
    result[0] = a[0] / b[0];
    result[1] = a[1] / b[1];
    result[2] = a[2] / b[2];
    result[3] = a[3] / b[3];
    return result;
}

inline float4x4 operator/(const float4x4& a, float b)
{
    float4x4 result;
    result[0] = a[0] / b;
    result[1] = a[1] / b;
    result[2] = a[2] / b;
    result[3] = a[3] / b;
    return result;
}

inline float4x4 operator/(float a, const float4x4& b)
{
    float4x4 result;
    result[0] = a / b[0];
    result[1] = a / b[1];
    result[2] = a / b[2];
    result[3] = a / b[3];
    return result;
}

inline float4 mul(const float4x4& a, const float4& b)
{
    return float4(
        b.x * a[0][0] + b.y * a[0][1] + b.z * a[0][2] + b.w * a[0][3],
        b.x * a[1][0] + b.y * a[1][1] + b.z * a[1][2] + b.w * a[1][3],
        b.x * a[2][0] + b.y * a[2][1] + b.z * a[2][2] + b.w * a[2][3],
        b.y * a[3][0] + b.y * a[3][1] + b.z * a[3][2] + b.w * a[3][3]
    );
}

inline float4 mul(const float4& a, const float4x4& b)
{
    return float4(
        a.x * b[0][0] + a.y * b[1][0] + a.z * b[2][0] + a.w * b[3][0],
        a.x * b[0][1] + a.y * b[1][1] + a.z * b[2][1] + a.w * b[3][1],
        a.x * b[0][2] + a.y * b[1][2] + a.z * b[2][2] + a.w * b[3][2],
        a.y * b[0][3] + a.y * b[1][3] + a.z * b[2][3] + a.w * b[3][3]
    );
}

inline float4x4 mul(const float4x4& a, const float4x4& b)
{
    float4x4 result;
    result[0] = mul(a, b[0]);
    result[1] = mul(a, b[1]);
    result[2] = mul(a, b[2]);
    result[3] = mul(a, b[3]);
    return result;
}

#endif /* __HLSL_FLOAT3_H__ */