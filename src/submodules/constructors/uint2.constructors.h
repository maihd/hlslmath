HLSLMATH_CONSTEXPR uint2::uint2()
    : x(0)
    , y(0)
{
}

HLSLMATH_INLINE uint2::uint2(uint s)
    : x(s)
    , y(s)
{
}

HLSLMATH_INLINE uint2::uint2(uint x, uint y)
    : x(x)
    , y(y)
{
}

HLSLMATH_INLINE uint& uint2::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
    return ((uint*)this)[index];
}

HLSLMATH_INLINE uint uint2::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
    return ((uint*)this)[index];
}