inline int2::int2(int s)
    : x(s)
    , y(s)
{
}

inline int2::int2(int x, int y)
    : x(x)
    , y(y)
{
}

inline int& int2::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
    return ((int*)this)[index];
}

inline int int2::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
    return ((int*)this)[index];
}