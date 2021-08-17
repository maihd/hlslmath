HLSLMATH_CONSTEXPR float2::float2()
    : x(0)
    , y(0)
{
}

HLSLMATH_INLINE float2::float2(float s)
    : x(s)
    , y(s)
{
}

HLSLMATH_INLINE float2::float2(float x, float y)
    : x(x)
    , y(y)
{
}

HLSLMATH_INLINE float2::float2(const float3& v)
    : x(v.x)
    , y(v.y)
{
}

HLSLMATH_INLINE float2::float2(const float4& v)
    : x(v.x)
    , y(v.y)
{
}

HLSLMATH_INLINE float2::operator float3() const
{
    return float3(x, y, 0.0f);
}

HLSLMATH_INLINE float2::operator float4() const
{
    return float4(x, y, 0.0f, 0.0f);
}

HLSLMATH_INLINE float& float2::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
    return ((float*)this)[index];
}

HLSLMATH_INLINE float float2::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
    return ((float*)this)[index];
}