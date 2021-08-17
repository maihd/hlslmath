HLSLMATH_CONSTEXPR float2x2::float2x2()
    : data()
{
}

HLSLMATH_INLINE float2x2::float2x2(float s)    
{
    (*this)[0] = float2(s, s);
    (*this)[1] = float2(s, s);
}

HLSLMATH_INLINE float2x2::float2x2(const float2& m0, const float2& m1)
{
    (*this)[0] = m0;
    (*this)[1] = m1;
}

HLSLMATH_INLINE float2x2::float2x2(
    float m00, float m01, 
    float m10, float m11
)
{
    (*this)[0] = float2(m00, m01);
    (*this)[1] = float2(m10, m11);
}

HLSLMATH_INLINE float2& float2x2::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
    return ((float2*)data)[index];
}

HLSLMATH_INLINE const float2& float2x2::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
    return ((float2*)data)[index];
}

HLSLMATH_INLINE float2x2 float2x2::identity()
{
    return float2x2(1, 0, 0, 1);
}