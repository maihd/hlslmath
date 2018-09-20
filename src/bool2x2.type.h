union bool2x2
{
public: // @region: Constructors
    inline bool2x2(const bool2& m0, const bool2& m1)
    {
		data[0] = m0;
		data[1] = m1;
    }

    inline bool2x2(bool m00, bool m01, bool m10, bool m11)
        : bool2x2(bool2(m00, m01),
                  bool2(m10, m11))
    {
    }

    inline explicit bool2x2(bool s = false)
        : bool2x2(s, s,
                  s, s)
    {
    }

public: // @region: Operators
    inline bool2& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return data[index];
    }

    inline const bool2& operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return data[index];
    }
    
public: // @region: Internal fields
    struct
    {
        bool2 data[2];
    };
};
