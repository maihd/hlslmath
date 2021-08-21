inline float2::float2(float s)
    : x(s)
    , y(s)
{
}

inline float2::float2(float x, float y)
    : x(x)
    , y(y)
{
}

inline float2::float2(const float3& v)
    : x(v.x)
    , y(v.y)
{
}

inline float2::float2(const float4& v)
    : x(v.x)
    , y(v.y)
{
}

inline float2::operator float3() const
{
    return float3(x, y, 0.0f);
}

inline float2::operator float4() const
{
    return float4(x, y, 0.0f, 0.0f);
}

inline float& float2::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
    return ((float*)this)[index];
}

inline float float2::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
    return ((float*)this)[index];
}