HLSLMATH_CONSTEXPR int3::int3()
    : x(0)
    , y(0)
    , z(0)
{
}

HLSLMATH_INLINE int3::int3(int x, int y, int z)
    : x(x)
    , y(y) 
    , z(z)
{
}

HLSLMATH_INLINE int3::int3(int s)
    : x(s)
    , y(s)
    , z(s)
{
}

HLSLMATH_INLINE int& int3::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
    return ((int*)this)[index];
}

HLSLMATH_INLINE int int3::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
    return ((int*)this)[index];
}