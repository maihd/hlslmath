HLSLMATH_CONSTEXPR int4::int4()
    : x(0)
    , y(0)
    , z(0)
    , w(0)
{
}

HLSLMATH_INLINE int4::int4(int x, int y, int z, int w)
    : x(x)
    , y(y) 
    , z(z)
    , w(w)
{
}

HLSLMATH_INLINE int4::int4(int s)
    : x(s)
    , y(s)
    , z(s)
    , w(s)
{
}

HLSLMATH_INLINE int& int4::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
    return ((int*)this)[index];
}

HLSLMATH_INLINE int int4::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
    return ((int*)this)[index];
}