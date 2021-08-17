HLSLMATH_CONSTEXPR float4x4::float4x4()
    : data()
{
}

HLSLMATH_INLINE float4x4::float4x4(
    const float4& m0,
    const float4& m1,
    const float4& m2,
    const float4& m3
)
{
    (*this)[0] = m0;
    (*this)[1] = m1;
    (*this)[2] = m2;
    (*this)[3] = m3;
}

HLSLMATH_INLINE float4x4::float4x4(
    float m00, float m01, float m02, float m03,
    float m10, float m11, float m12, float m13,
    float m20, float m21, float m22, float m23,
    float m30, float m31, float m32, float m33
)
{
    (*this)[0] = float4(m00, m01, m02, m03);
    (*this)[1] = float4(m10, m11, m12, m13);
    (*this)[2] = float4(m20, m21, m22, m23);
    (*this)[3] = float4(m30, m31, m32, m33);
}

HLSLMATH_INLINE float4x4::float4x4(float s)
{
    (*this)[0] = float4(s);
    (*this)[1] = float4(s);
    (*this)[2] = float4(s);
    (*this)[3] = float4(s);
}

HLSLMATH_INLINE float4& float4x4::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
    return ((float4*)data)[index];
}

HLSLMATH_INLINE const float4& float4x4::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
    return ((float4*)data)[index];
}

HLSLMATH_INLINE float4x4 float4x4::identity()
{
    return float4x4(
        1, 0, 0, 0, 
        0, 1, 0, 0, 
        0, 0, 1, 0, 
        0, 0, 0, 1
    );
}