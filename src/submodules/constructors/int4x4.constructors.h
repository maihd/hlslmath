HLSLMATH_CONSTEXPR int4x4::int4x4()
    : data()
{
}

HLSLMATH_INLINE int4x4::int4x4(const int4& m0, const int4& m1, const int4& m2, const int4& m3)
{
    (*this)[0] = m0;
    (*this)[1] = m1;
    (*this)[2] = m2;
    (*this)[3] = m3;
}

HLSLMATH_INLINE int4x4::int4x4(
    int m00, int m01, int m02, int m03,
    int m10, int m11, int m12, int m13,
    int m20, int m21, int m22, int m23,
    int m30, int m31, int m32, int m33
)
{
    (*this)[0] = int4(m00, m01, m02, m03);
    (*this)[1] = int4(m10, m11, m12, m13);
    (*this)[2] = int4(m20, m21, m22, m23);
    (*this)[3] = int4(m30, m31, m32, m33);
}

HLSLMATH_INLINE int4x4::int4x4(int s)
{
    (*this)[0] = int4(s, s, s, s);
    (*this)[1] = int4(s, s, s, s);
    (*this)[2] = int4(s, s, s, s);
    (*this)[3] = int4(s, s, s, s);
}

HLSLMATH_INLINE int4& int4x4::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
    return ((int4*)data)[index];
}

HLSLMATH_INLINE const int4& int4x4::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
    return ((int4*)data)[index];
}