union bool2x2
{
public: // @region: Constructors
    HLSLMATH_CONSTEXPR bool2x2() {}

    HLSLMATH_INLINE bool2x2(const bool2& m0, const bool2& m1)
    {
		(*this)[0] = m0;
		(*this)[1] = m1;
    }

    HLSLMATH_INLINE bool2x2(bool m00, bool m01, bool m10, bool m11)
    {
        (*this)[0] = bool2(m00, m01);
        (*this)[1] = bool2(m10, m11);
    }

    HLSLMATH_INLINE bool2x2(bool s)
    {
        (*this)[0] = bool2(s, s);
        (*this)[1] = bool2(s, s);
    }

public: // @region: Operators
    HLSLMATH_INLINE bool2& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((bool2*)data)[index];
    }

    HLSLMATH_INLINE const bool2& operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((bool2*)data)[index];
    }
    
private: // @region: Internal fields
    struct
    {
        bool data[2][2];
    };
};
