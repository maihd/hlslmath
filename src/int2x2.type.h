union int2x2
{
public: // @region: Constructors
    inline int2x2(const int2& m0, const int2& m1)
        : data{ m0, m1 }
    {
    }

    inline int2x2(int m00, int m01, int m10, int m11)
        : int2x2(int2(m00, m01),
                 int2(m10, m11))
    {
    }

    inline explicit int2x2(int s = 0)
        : int2x2(s, s,
                 s, s)
    {
    }

public: // @region: Operators
    inline int2& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return data[index];
    }

    inline const int2& operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return data[index];
    }
    
public: // @region: Internal fields
    struct
    {
        int2 data[2];
    };
};
