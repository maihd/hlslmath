inline uint4::uint4(uint x, uint y, uint z, uint w)
    : x(x)
    , y(y) 
    , z(z)
    , w(w)
{
}

inline uint4::uint4(int s)
    : x(s)
    , y(s)
    , z(s)
    , w(s)
{
}

inline uint& uint4::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
    return ((uint*)this)[index];
}

inline uint uint4::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
    return ((uint*)this)[index];
}