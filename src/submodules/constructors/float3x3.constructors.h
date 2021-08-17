HLSLMATH_CONSTEXPR float3x3::float3x3()
    : data()
{
}

HLSLMATH_INLINE float3x3::float3x3(const float3& m0, const float3& m1, const float3& m2)
{
    (*this)[0] = m0;
    (*this)[1] = m1;
    (*this)[2] = m2;
}

HLSLMATH_INLINE float3x3::float3x3(
    float m00, float m01, float m02,
    float m10, float m11, float m12,
    float m20, float m21, float m22
)
{
    (*this)[0] = float3(m00, m01, m02);
    (*this)[1] = float3(m10, m11, m12);
    (*this)[2] = float3(m20, m21, m22);
}

HLSLMATH_INLINE float3x3::float3x3(float s)
{
    (*this)[0] = float3(s, s, s);
    (*this)[1] = float3(s, s, s);
    (*this)[2] = float3(s, s, s);
}

HLSLMATH_INLINE float3& float3x3::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
    return ((float3*)data)[index];
}

HLSLMATH_INLINE const float3& float3x3::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
    return ((float3*)data)[index];
}

HLSLMATH_INLINE float3x3 float3x3::identity()
{
    return float3x3(1, 0, 0, 0, 1, 0, 0, 0, 1);
}