inline bool2::bool2(bool s)
    : x(s)
    , y(s)
{
}

inline bool2::bool2(bool x, bool y)
    : x(x)
    , y(y)
{
}

inline bool& bool2::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
    return ((bool*)this)[index];
}

inline bool bool2::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
    return ((bool*)this)[index];
}