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

inline const float4x4& operator+(const float4x4& m)
{
    return m;
}

inline float4x4& operator--(float4x4& m)
{
    --m[0];
    --m[1];
    --m[2];
    --m[3];
    return m;
}

inline float4x4& operator++(float4x4& m)
{
    ++m[0];
    ++m[1];
    ++m[2];
    ++m[3];
    return m;
}

inline const float4x4& operator--(float4x4& m, int)
{
    m[0]--;
    m[1]--;
    m[2]--;
    m[3]--;
    return m;
}

inline const float4x4& operator++(float4x4& m, int)
{
    m[0]++;
    m[1]++;
    m[2]++;
    m[3]++;
    return m;
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

inline float4x4 operator+(const float4x4& a, float b)
{
    float4x4 result;
    result[0] = a[0] + b;
    result[1] = a[1] + b;
    result[2] = a[2] + b;
    result[3] = a[3] + b;
    return result;
}

inline float4x4 operator+(float a, const float4x4& b)
{
    float4x4 result;
    result[0] = a + b[0];
    result[1] = a + b[1];
    result[2] = a + b[2];
    result[3] = a + b[3];
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

inline float4x4 operator-(const float4x4& a, float b)
{
    float4x4 result;
    result[0] = a[0] - b;
    result[1] = a[1] - b;
    result[2] = a[2] - b;
    result[3] = a[3] - b;
    return result;
}

inline float4x4 operator-(float a, const float4x4& b)
{
    float4x4 result;
    result[0] = a - b[0];
    result[1] = a - b[1];
    result[2] = a - b[2];
    result[3] = a - b[3];
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

inline bool4x4 operator==(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] == b[0];
    result[1] = a[1] == b[1];
    result[2] = a[2] == b[2];
    result[3] = a[3] == b[3];
    return result;
}

inline bool4x4 operator!=(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] != b[0];
    result[1] = a[1] != b[1];
    result[2] = a[2] != b[2];
    result[3] = a[3] != b[3];
    return result;
}

inline bool4x4 operator<(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] < b[0];
    result[1] = a[1] < b[1];
    result[2] = a[2] < b[2];
    result[3] = a[3] < b[3];
    return result;
}

inline bool4x4 operator>(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] > b[0];
    result[1] = a[1] > b[1];
    result[2] = a[2] > b[2];
    result[3] = a[3] > b[3];
    return result;
}

inline bool4x4 operator<=(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] <= b[0];
    result[1] = a[1] <= b[1];
    result[2] = a[2] <= b[2];
    result[3] = a[3] <= b[3];
    return result;
}

inline bool4x4 operator>=(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] >= b[0];
    result[1] = a[1] >= b[1];
    result[2] = a[2] >= b[2];
    result[3] = a[3] >= b[3];
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

inline float4x4 min(const float4x4& a, const float4x4& b)
{
    float4x4 result;
    result[0] = min(a[0], b[0]);
    result[1] = min(a[1], b[1]);
    result[2] = min(a[2], b[2]);
    result[3] = min(a[3], b[3]);
    return result;
}

inline float4x4 max(const float4x4& a, const float4x4& b)
{
    float4x4 result;
    result[0] = max(a[0], b[0]);
    result[1] = max(a[1], b[1]);
    result[2] = max(a[2], b[2]);
    result[3] = max(a[3], b[3]);
    return result;
}

inline float4x4 clamp(const float4x4& v, const float4x4& min, const float4x4& max)
{
    float4x4 result;
    result[0] = clamp(v[0], min[0], max[0]);
    result[1] = clamp(v[1], min[1], max[1]);
    result[2] = clamp(v[2], min[2], max[2]);
    result[3] = clamp(v[3], min[3], max[3]);
    return result;
}

inline float4x4 transpose(const float4x4& m)
{
    float4x4 result;
    result[0][0] = m[0][0]; result[0][1] = m[1][0]; result[0][2] = m[2][0]; result[0][3] = m[3][0];
    result[1][0] = m[0][1]; result[1][1] = m[1][1]; result[1][2] = m[2][1]; result[1][3] = m[3][1];
    result[2][0] = m[0][2]; result[2][1] = m[1][2]; result[2][2] = m[2][2]; result[2][3] = m[3][2];
    result[3][0] = m[0][3]; result[3][1] = m[1][3]; result[3][2] = m[2][3]; result[3][3] = m[3][3];
    return result;
}

inline float4x4 inverse(const float4x4& m)
{
    const float n11 = m[0][0], n12 = m[1][0], n13 = m[2][0], n14 = m[3][0];
    const float n21 = m[0][1], n22 = m[1][1], n23 = m[2][1], n24 = m[3][1];
    const float n31 = m[0][2], n32 = m[1][2], n33 = m[2][2], n34 = m[3][2];
    const float n41 = m[0][3], n42 = m[1][3], n43 = m[2][3], n44 = m[3][3];

    const float t11 = n23 * n34 * n42 - n24 * n33 * n42 + n24 * n32 * n43 - n22 * n34 * n43 - n23 * n32 * n44 + n22 * n33 * n44;
    const float t12 = n14 * n33 * n42 - n13 * n34 * n42 - n14 * n32 * n43 + n12 * n34 * n43 + n13 * n32 * n44 - n12 * n33 * n44;
    const float t13 = n13 * n24 * n42 - n14 * n23 * n42 + n14 * n22 * n43 - n12 * n24 * n43 - n13 * n22 * n44 + n12 * n23 * n44;
    const float t14 = n14 * n23 * n32 - n13 * n24 * n32 - n14 * n22 * n33 + n12 * n24 * n33 + n13 * n22 * n34 - n12 * n23 * n34;

    const float det = n11 * t11 + n21 * t12 + n31 * t13 + n41 * t14;
    if (det < 0.0f)
    {
        return float4x4(0.0f);
    }

    const float idet = 1.0f / det;
    float4x4 result;

    result[0][0] = t11 * idet;
    result[0][1] = (n24 * n33 * n41 - n23 * n34 * n41 - n24 * n31 * n43 + n21 * n34 * n43 + n23 * n31 * n44 - n21 * n33 * n44) * idet;
    result[0][2] = (n22 * n34 * n41 - n24 * n32 * n41 + n24 * n31 * n42 - n21 * n34 * n42 - n22 * n31 * n44 + n21 * n32 * n44) * idet;
    result[0][3] = (n23 * n32 * n41 - n22 * n33 * n41 - n23 * n31 * n42 + n21 * n33 * n42 + n22 * n31 * n43 - n21 * n32 * n43) * idet;

    result[1][0] = t12 * idet;
    result[1][1] = (n13 * n34 * n41 - n14 * n33 * n41 + n14 * n31 * n43 - n11 * n34 * n43 - n13 * n31 * n44 + n11 * n33 * n44) * idet;
    result[1][2] = (n14 * n32 * n41 - n12 * n34 * n41 - n14 * n31 * n42 + n11 * n34 * n42 + n12 * n31 * n44 - n11 * n32 * n44) * idet;
    result[1][3] = (n12 * n33 * n41 - n13 * n32 * n41 + n13 * n31 * n42 - n11 * n33 * n42 - n12 * n31 * n43 + n11 * n32 * n43) * idet;

    result[2][0] = t13 * idet;
    result[2][1] = (n14 * n23 * n41 - n13 * n24 * n41 - n14 * n21 * n43 + n11 * n24 * n43 + n13 * n21 * n44 - n11 * n23 * n44) * idet;
    result[2][2] = (n12 * n24 * n41 - n14 * n22 * n41 + n14 * n21 * n42 - n11 * n24 * n42 - n12 * n21 * n44 + n11 * n22 * n44) * idet;
    result[2][3] = (n13 * n22 * n41 - n12 * n23 * n41 - n13 * n21 * n42 + n11 * n23 * n42 + n12 * n21 * n43 - n11 * n22 * n43) * idet;

    result[3][0] = t14 * idet;
    result[3][1] = (n13 * n24 * n31 - n14 * n23 * n31 + n14 * n21 * n33 - n11 * n24 * n33 - n13 * n21 * n34 + n11 * n23 * n34) * idet;
    result[3][2] = (n14 * n22 * n31 - n12 * n24 * n31 - n14 * n21 * n32 + n11 * n24 * n32 + n12 * n21 * n34 - n11 * n22 * n34) * idet;
    result[3][3] = (n12 * n23 * n31 - n13 * n22 * n31 + n13 * n21 * n32 - n11 * n23 * n32 - n12 * n21 * n33 + n11 * n22 * n33) * idet;

    return result;
}

inline float4x4 float4x4::ortho(float l, float r, float b, float t, float n, float f)
{
    const float x = 1.0f / (r - l);
    const float y = 1.0f / (t - b);
    const float z = 1.0f / (f - n);

    float4x4 result;
    result[0] = float4(2.0f * x, 0, 0, 0);
    result[1] = float4(0, 2.0f * y, 0, 0);
    result[2] = float4(0, 0, 2.0f * z, 0);
    result[3] = float4(-x * (l + r), -y * (b + t), -z * (n + f), 1.0f);
    return result;
}

inline float4x4 float4x4::frustum(float l, float r, float b, float t, float n, float f)
{
    const float x = 1.0f / (r - l);
    const float y = 1.0f / (t - b);
    const float z = 1.0f / (f - n);

    float4x4 result;
    result[0] = float4(2.0f * x, 0, 0, 0);
    result[1] = float4(0, 2.0f * y, 0, 0);
    result[2] = float4(x * (l + r), y * (b + t), z * (n + f), 1.0f);
    result[3] = float4(0, 0, 2.0f * z, 0);
    return result;
}

inline float4x4 float4x4::perspective(float fov, float aspect, float znear, float zfar)
{
    const float a = 1.0f / tan(fov * 0.5f);
    const float b = zfar / (znear - zfar);

    float4x4 result;
    result[0] = float4(a / aspect,   0,         0,   0);
    result[1] = float4(         0,   a,         0,   0);
    result[2] = float4(         0,   0,         b,  -1);
    result[3] = float4(         0,   0, znear * b,   0);
    return result;
}

inline float4x4 float4x4::lookat(const float3& eye, const float3& target, const float3& up)
{
    const float3 z = normalize(eye - target);
    const float3 x = normalize(cross(up, z));
    const float3 y = normalize(cross( z, x));

    float4x4 result;
    result[0] = float4(x.x, y.x, z.x, 0);
    result[1] = float4(x.y, y.y, z.y, 0);
    result[2] = float4(x.z, y.z, z.z, 0);
    result[3] = float4(-dot(x, eye), -dot(y, eye), -dot(z, eye), 1.0f);
    return result;
}

#endif /* __HLSL_FLOAT3_H__ */