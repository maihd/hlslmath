HLSLMATH_CONSTEXPR int2::int2()
    : x(0)
    , y(0)
{
}

HLSLMATH_INLINE int2::int2(int s)
    : x(s)
    , y(s)
{
}

HLSLMATH_INLINE int2::int2(int x, int y)
    : x(x)
    , y(y)
{
}

HLSLMATH_INLINE int& int2::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
    return ((int*)this)[index];
}

HLSLMATH_INLINE int int2::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
    return ((int*)this)[index];
}