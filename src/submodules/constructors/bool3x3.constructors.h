HLSLMATH_CONSTEXPR bool3x3::bool3x3()
    : data()
{
}

HLSLMATH_INLINE bool3x3::bool3x3(bool s)
{
    (*this)[0] = bool3(s, s, s);
    (*this)[1] = bool3(s, s, s);
    (*this)[2] = bool3(s, s, s);
}

HLSLMATH_INLINE bool3x3::bool3x3(const bool3& m0, const bool3& m1, const bool3& m2)
{
    (*this)[0] = m0;
    (*this)[1] = m1;
    (*this)[2] = m2;
}

HLSLMATH_INLINE bool3x3::bool3x3(
    bool m00, bool m01, bool m02,
    bool m10, bool m11, bool m12,
    bool m20, bool m21, bool m22)
{
    (*this)[0] = bool3(m00, m01, m02);
    (*this)[1] = bool3(m10, m11, m12);
    (*this)[2] = bool3(m20, m21, m22);
}

HLSLMATH_INLINE bool3& bool3x3::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
    return ((bool3*)data)[index];
}

HLSLMATH_INLINE const bool3& bool3x3::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
    return ((bool3*)data)[index];
}