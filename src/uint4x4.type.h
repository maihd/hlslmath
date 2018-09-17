union uint4x4
{
public: // @region: Constructors
    inline uint4x4(const uint4& m0, const uint4& m1, const uint4& m2, const uint4& m3)
        : data{ m0, m1, m2, m3 }
    {
    }

    inline uint4x4(uint m00, uint m01, uint m02, uint m03,
                   uint m10, uint m11, uint m12, uint m13,
                   uint m20, uint m21, uint m22, uint m23,
                   uint m30, uint m31, uint m32, uint m33)
        : uint4x4(uint4(m00, m01, m02, m03),
                  uint4(m10, m11, m12, m13),
                  uint4(m20, m21, m22, m23),
                  uint4(m30, m31, m32, m33))
    {
    }

    inline explicit uint4x4(uint s = 0)
        : uint4x4(s, s, s, s,
                  s, s, s, s,
                  s, s, s, s,
                  s, s, s, s)
    {
    }

public: // Constructors
    inline uint4& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 4, "Index out of range");
        return data[index];
    }

    inline const uint4& operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 4, "Index out of range");
        return data[index];
    }
    
public: // @region: Internal fields
    struct
    {
        uint4 data[4];
    };
};
