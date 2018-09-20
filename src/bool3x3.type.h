union bool3x3
{
public: // @region: Constructors
    inline bool3x3(const bool3& m0, const bool3& m1, const bool3& m2)
    {
		data[0] = m0;
		data[1] = m1;
		data[2] = m2;
    }

    inline bool3x3(bool m00, bool m01, bool m02,
                   bool m10, bool m11, bool m12,
                   bool m20, bool m21, bool m22)
        : bool3x3(bool3(m00, m01, m02),
                  bool3(m10, m11, m12),
                  bool3(m20, m21, m22))
    {
    }

    inline explicit bool3x3(bool s = false)
        : bool3x3(s, s, s,
                  s, s, s,
                  s, s, s)
    {
    }

public: // @region: Operators
    inline bool3& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return data[index];
    }

    inline const bool3& operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return data[index];
    }
    
public: // @region: Internal fields
    struct
    {
        bool3 data[3];
    };
};
