HLSLMATH_CONSTEXPR bool4::bool4()
    : x(false)
    , y(false)
    , z(false)
    , w(false)
{
}

HLSLMATH_INLINE bool4::bool4(bool s)
    : x(s)
    , y(s)
    , z(s)
    , w(s)
{
}

HLSLMATH_INLINE bool4::bool4(bool x, bool y, bool z, bool w)
    : x(x)
    , y(y) 
    , z(z)
    , w(w)
{
}

HLSLMATH_INLINE bool& bool4::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
    return ((bool*)this)[index];
}

HLSLMATH_INLINE bool bool4::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
    return ((bool*)this)[index];
}