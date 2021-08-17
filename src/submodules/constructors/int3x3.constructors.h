HLSLMATH_CONSTEXPR int3x3::int3x3()
    : data()
{
}

HLSLMATH_INLINE int3x3::int3x3(const int3& m0, const int3& m1, const int3& m2)
{
    (*this)[0] = m0;
    (*this)[1] = m1;
    (*this)[2] = m2;
}

HLSLMATH_INLINE int3x3::int3x3(
    int m00, int m01, int m02,
    int m10, int m11, int m12,
    int m20, int m21, int m22
)
{
    (*this)[0] = int3(m00, m01, m02);
    (*this)[1] = int3(m10, m11, m12);
    (*this)[2] = int3(m20, m21, m22);
}

HLSLMATH_INLINE int3x3::int3x3(int s)
{
    (*this)[0] = int3(s, s, s);
    (*this)[1] = int3(s, s, s);
    (*this)[2] = int3(s, s, s);
}

HLSLMATH_INLINE int3& int3x3::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
    return ((int3*)data)[index];
}

HLSLMATH_INLINE const int3& int3x3::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
    return ((int3*)data)[index];
}