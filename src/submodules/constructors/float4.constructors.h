inline float4::float4(const float3& xyz, float w)
    : x(xyz.x)
    , y(xyz.y)
    , z(xyz.z)
    , w(w)
{
}

inline float4::float4(float x, float y, float z, float w)
    : x(x)
    , y(y)
    , z(z)
    , w(w)
{
}

inline float4::float4(float s)
    : x(s)
    , y(s)
    , z(s)
    , w(s)
{
}

 // @region: Operators
inline float& float4::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
    return ((float*)this)[index];
}

inline float float4::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
    return ((float*)this)[index];
}