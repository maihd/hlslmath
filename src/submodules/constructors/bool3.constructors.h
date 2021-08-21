inline bool3::bool3(bool s)
    : x(s)
    , y(s)
    , z(s)
{
}

inline bool3::bool3(bool x, bool y, bool z)
    : x(x)
    , y(y) 
    , z(z)
{
}

inline bool& bool3::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
    return ((bool*)this)[index];
}

inline bool bool3::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
    return ((bool*)this)[index];
}