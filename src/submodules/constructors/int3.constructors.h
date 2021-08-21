inline int3::int3(int x, int y, int z)
    : x(x)
    , y(y) 
    , z(z)
{
}

inline int3::int3(int s)
    : x(s)
    , y(s)
    , z(s)
{
}

inline int& int3::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
    return ((int*)this)[index];
}

inline int int3::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
    return ((int*)this)[index];
}