inline int2x2::int2x2(const int2& m0, const int2& m1)
{
    (*this)[0] = m0;
    (*this)[1] = m1;
}   

inline int2x2::int2x2(int m00, int m01, int m10, int m11)
{
    (*this)[0] = int2(m00, m01);
    (*this)[1] = int2(m10, m11);
}

inline int2x2::int2x2(int s)
{
    (*this)[0] = int2(s, s);
    (*this)[1] = int2(s, s);
}

inline int2& int2x2::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
    return ((int2*)data)[index];
}

inline const int2& int2x2::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
    return ((int2*)data)[index];
}