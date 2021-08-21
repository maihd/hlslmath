inline int4::int4(int x, int y, int z, int w)
    : x(x)
    , y(y) 
    , z(z)
    , w(w)
{
}

inline int4::int4(int s)
    : x(s)
    , y(s)
    , z(s)
    , w(s)
{
}

inline int& int4::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
    return ((int*)this)[index];
}

inline int int4::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
    return ((int*)this)[index];
}