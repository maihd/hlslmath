union bool2
{
public: // @region: Fields
    struct
    {
        bool x, y;
    };

public: // @region: Constructors
    HLSLMATH_CONSTEXPR bool2() {}

    HLSLMATH_INLINE bool2(bool x, bool y)
        : x(x)
        , y(y) {}

    HLSLMATH_INLINE bool2(bool s)
        : x(s)
        , y(s) {}

public: // @region: Operators
    HLSLMATH_INLINE bool& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((bool*)this)[index];
    }

    HLSLMATH_INLINE int  operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((bool*)this)[index];
    }
};
