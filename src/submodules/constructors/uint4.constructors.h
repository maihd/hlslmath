HLSLMATH_CONSTEXPR uint4::uint4()
    : x(0)
    , y(0) 
    , z(0)
    , w(0)
{
}

HLSLMATH_INLINE uint4::uint4(uint x, uint y, uint z, uint w)
    : x(x)
    , y(y) 
    , z(z)
    , w(w)
{
}

HLSLMATH_INLINE uint4::uint4(int s)
    : x(s)
    , y(s)
    , z(s)
    , w(s)
{
}

HLSLMATH_INLINE uint& uint4::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
    return ((uint*)this)[index];
}

HLSLMATH_INLINE uint uint4::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
    return ((uint*)this)[index];
}