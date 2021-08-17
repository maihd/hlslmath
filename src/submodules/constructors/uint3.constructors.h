HLSLMATH_CONSTEXPR uint3::uint3()
    : x(0)
    , y(0) 
    , z(0)
{
}

HLSLMATH_INLINE uint3::uint3(uint s)
    : x(s)
    , y(s)
    , z(s)
{
}

HLSLMATH_INLINE uint3::uint3(uint x, uint y, uint z)
    : x(x)
    , y(y) 
    , z(z)
{
}

HLSLMATH_INLINE uint& uint3::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
    return ((uint*)this)[index];
}

HLSLMATH_INLINE uint uint3::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
    return ((uint*)this)[index];
}