union uint4x4
{
public: // @region: Constructors
    HLSLMATH_CONSTEXPR uint4x4() {}

    HLSLMATH_INLINE uint4x4(const uint4& m0, const uint4& m1, const uint4& m2, const uint4& m3)
    {
        (*this)[0] = m0;
        (*this)[1] = m1;
        (*this)[2] = m2;
        (*this)[3] = m3;
    }

    HLSLMATH_INLINE uint4x4(uint m00, uint m01, uint m02, uint m03,
                   uint m10, uint m11, uint m12, uint m13,
                   uint m20, uint m21, uint m22, uint m23,
                   uint m30, uint m31, uint m32, uint m33)
    {
        (*this)[0] = uint4(m00, m01, m02, m03);
        (*this)[1] = uint4(m10, m11, m12, m13);
        (*this)[2] = uint4(m20, m21, m22, m23);
        (*this)[3] = uint4(m30, m31, m32, m33);
    }

    HLSLMATH_INLINE uint4x4(uint s)
    {
        (*this)[0] = uint4(s, s, s, s);
        (*this)[1] = uint4(s, s, s, s);
        (*this)[2] = uint4(s, s, s, s);
        (*this)[3] = uint4(s, s, s, s);
    }

public: // Constructors
    HLSLMATH_INLINE uint4& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((uint4*)data)[index];
    }

    HLSLMATH_INLINE const uint4& operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((uint4*)data)[index];
    }
    
private: // @region: Internal fields
    struct
    {
        uint data[4][4];
    };
};
