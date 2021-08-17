HLSLMATH_CONSTEXPR bool3::bool3()
    : x(false)
    , y(false)
    , z(false)
{
}

HLSLMATH_INLINE bool3::bool3(bool s)
    : x(s)
    , y(s)
    , z(s)
{
}

HLSLMATH_INLINE bool3::bool3(bool x, bool y, bool z)
    : x(x)
    , y(y) 
    , z(z)
{
}

HLSLMATH_INLINE bool& bool3::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
    return ((bool*)this)[index];
}

HLSLMATH_INLINE bool bool3::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
    return ((bool*)this)[index];
}