union uint3x3
{
public: // @region: Constructors
    inline uint3x3(const uint3& m0, const uint3& m1, const uint3& m2)
    {
		data[0] = m0;
		data[1] = m1;
		data[2] = m2;
    }

    inline uint3x3(uint m00, uint m01, uint m02,
                  uint m10, uint m11, uint m12,
                  uint m20, uint m21, uint m22)
        : uint3x3(uint3(m00, m01, m02),
                  uint3(m10, m11, m12),
                  uint3(m20, m21, m22))
    {
    }

    inline explicit uint3x3(int s = 0)
        : uint3x3(s, s, s,
                  s, s, s,
                  s, s, s)
    {
    }

public: // @region: Operators
    inline uint3& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return data[index];
    }

    inline const uint3& operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return data[index];
    }
    
public: // @region: Internal fields
    struct
    {
        uint3 data[3];
    };
};
