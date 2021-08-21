inline bool2x2::bool2x2(bool s)
{
    (*this)[0] = bool2(s, s);
    (*this)[1] = bool2(s, s);
}

inline bool2x2::bool2x2(const bool2& m0, const bool2& m1)
{
    (*this)[0] = m0;
    (*this)[1] = m1;
}

inline bool2x2::bool2x2(bool m00, bool m01, bool m10, bool m11)
{
    (*this)[0] = bool2(m00, m01);
    (*this)[1] = bool2(m10, m11);
}

inline bool2& bool2x2::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
    return ((bool2*)data)[index];
}

inline const bool2& bool2x2::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
    return ((bool2*)data)[index];
}