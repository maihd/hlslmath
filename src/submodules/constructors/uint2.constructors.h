inline uint2::uint2(uint s)
    : x(s)
    , y(s)
{
}

inline uint2::uint2(uint x, uint y)
    : x(x)
    , y(y)
{
}

inline uint& uint2::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
    return ((uint*)this)[index];
}

inline uint uint2::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
    return ((uint*)this)[index];
}