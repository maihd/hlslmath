inline float3::float3(float s)
    : x(s)
    , y(s)
    , z(s)
{
}

inline float3::float3(float x, float y, float z)
    : x(x)
    , y(y)
    , z(z)
{
}

inline float3::float3(const float2& v)
    : float3(v.x, v.y)
{
}

inline float3::float3(const float4& v)
    : float3(v.x, v.y, v.z)
{
}

inline float3::operator float2(void) const
{
    return float2(x, y);
}

inline float3::operator float4(void) const
{
    return float4(x, y, z, 0.0f);
}

inline float& float3::operator[](int index)
{
    return (&x)[index];
}

inline float float3::operator[](int index) const
{
    return (&x)[index];
}