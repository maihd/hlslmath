inline bool4::bool4(bool s)
    : x(s)
    , y(s)
    , z(s)
    , w(s)
{
}

inline bool4::bool4(bool x, bool y, bool z, bool w)
    : x(x)
    , y(y) 
    , z(z)
    , w(w)
{
}

inline bool& bool4::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
    return ((bool*)this)[index];
}

inline bool bool4::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
    return ((bool*)this)[index];
}