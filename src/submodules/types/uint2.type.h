union uint2
{
public: // @region: Fields
    struct
    {
        uint x, y;
    };

public: // @region: Constructors
    HLSLMATH_CONSTEXPR uint2() {}

    HLSLMATH_INLINE uint2(uint x, uint y)
        : x(x)
        , y(y) {}

    HLSLMATH_INLINE uint2(uint s)
        : x(s)
        , y(s) {}

public: // @region: Operators
    HLSLMATH_INLINE uint& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((uint*)this)[index];
    }

    HLSLMATH_INLINE uint  operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((uint*)this)[index];
    }
};
