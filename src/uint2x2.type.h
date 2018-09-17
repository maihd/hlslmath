union uint2x2
{
public: // @region: Constructors
    inline uint2x2(const uint2& m0, const uint2& m1)
        : data{ m0, m1 }
    {
    }

    inline uint2x2(uint m00, uint m01, uint m10, uint m11)
        : uint2x2(uint2(m00, m01),
                  uint2(m10, m11))
    {
    }

    inline explicit uint2x2(int s = 0)
        : uint2x2(s, s,
                  s, s)
    {
    }

public: // @region: Operators
    inline uint2& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return data[index];
    }

    inline const uint2& operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return data[index];
    }
    
public: // @region: Internal fields
    struct
    {
        uint2 data[2];
    };
};
