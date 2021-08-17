union bool4
{
public: // @region: Fields
    struct
    {
        bool x, y, z, w;
    };

public: // @region: Constructors
    HLSLMATH_CONSTEXPR bool4() {}

	HLSLMATH_INLINE bool4(bool x, bool y, bool z, bool w)
        : x(x)
        , y(y) 
        , z(z)
        , w(w) {}

    HLSLMATH_INLINE bool4(bool s)
        : x(s)
        , y(s)
        , z(s)
        , w(s) {}

public: // @region: Operators
    HLSLMATH_INLINE bool& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((bool*)this)[index];
    }

    HLSLMATH_INLINE bool  operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((bool*)this)[index];
    }
};
