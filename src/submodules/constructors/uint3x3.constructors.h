inline uint3x3::uint3x3(const uint3& m0, const uint3& m1, const uint3& m2)
{
    (*this)[0] = m0;
    (*this)[1] = m1;
    (*this)[2] = m2;
}

inline uint3x3::uint3x3(
    uint m00, uint m01, uint m02,
    uint m10, uint m11, uint m12,
    uint m20, uint m21, uint m22
)
{
    (*this)[0] = uint3(m00, m01, m02);
    (*this)[1] = uint3(m10, m11, m12);
    (*this)[2] = uint3(m20, m21, m22);
}

inline uint3x3::uint3x3(uint s)
{
    (*this)[0] = uint3(s, s, s);
    (*this)[1] = uint3(s, s, s);
    (*this)[2] = uint3(s, s, s);
}

inline uint3& uint3x3::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
    return ((uint3*)data)[index];
}

inline const uint3& uint3x3::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
    return ((uint3*)data)[index];
}