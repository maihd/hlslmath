HLSLMATH_CONSTEXPR int2x2::int2x2()
    : data()
{
}

HLSLMATH_INLINE int2x2::int2x2(const int2& m0, const int2& m1)
{
    (*this)[0] = m0;
    (*this)[1] = m1;
}   

HLSLMATH_INLINE int2x2::int2x2(int m00, int m01, int m10, int m11)
{
    (*this)[0] = int2(m00, m01);
    (*this)[1] = int2(m10, m11);
}

HLSLMATH_INLINE int2x2::int2x2(int s)
{
    (*this)[0] = int2(s, s);
    (*this)[1] = int2(s, s);
}

HLSLMATH_INLINE int2& int2x2::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
    return ((int2*)data)[index];
}

HLSLMATH_INLINE const int2& int2x2::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
    return ((int2*)data)[index];
}