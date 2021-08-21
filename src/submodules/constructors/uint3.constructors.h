inline uint3::uint3(uint s)
    : x(s)
    , y(s)
    , z(s)
{
}

inline uint3::uint3(uint x, uint y, uint z)
    : x(x)
    , y(y) 
    , z(z)
{
}

inline uint& uint3::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
    return ((uint*)this)[index];
}

inline uint uint3::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
    return ((uint*)this)[index];
}