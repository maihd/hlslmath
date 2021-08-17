union bool3
{
public: // @region: Fields
    struct
    {
        bool x, y, z;
    };

public: // @region: Constructors
    HLSLMATH_CONSTEXPR bool3() {}

    HLSLMATH_INLINE bool3(bool x, bool y, bool z)
        : x(x)
        , y(y) 
        , z(z) {}

    HLSLMATH_INLINE bool3(bool s)
        : x(s)
        , y(s)
        , z(s) {}

public: // @region: Operators
    HLSLMATH_INLINE bool& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((bool*)this)[index];
    }

    HLSLMATH_INLINE bool  operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((bool*)this)[index];
    }
};
