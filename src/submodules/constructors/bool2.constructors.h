HLSLMATH_CONSTEXPR bool2::bool2()
    : x(false)
    , y(false)
{
}

HLSLMATH_INLINE bool2::bool2(bool s)
    : x(s)
    , y(s)
{
}

HLSLMATH_INLINE bool2::bool2(bool x, bool y)
    : x(x)
    , y(y)
{
}

HLSLMATH_INLINE bool& bool2::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
    return ((bool*)this)[index];
}

HLSLMATH_INLINE bool bool2::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
    return ((bool*)this)[index];
}