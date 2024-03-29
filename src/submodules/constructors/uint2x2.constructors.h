inline uint2x2::uint2x2(const uint2& m0, const uint2& m1)
{
    (*this)[0] = m0;
    (*this)[1] = m1;
}

inline uint2x2::uint2x2(uint m00, uint m01, uint m10, uint m11)
{
    (*this)[0] = uint2(m00, m01);
    (*this)[1] = uint2(m10, m11);
}

inline uint2x2::uint2x2(uint s)
{
    (*this)[0] = uint2(s, s);
    (*this)[1] = uint2(s, s);
}

inline uint2& uint2x2::operator[](int index)
{
    HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
    return ((uint2*)data)[index];
}

inline const uint2& uint2x2::operator[](int index) const
{
    HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
    return ((uint2*)data)[index];
}