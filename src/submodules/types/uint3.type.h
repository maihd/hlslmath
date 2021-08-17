union uint3
{
public: // @region: Fields
    struct
    {
        uint x, y, z;
    };

public: // @region: Constructors
    HLSLMATH_CONSTEXPR uint3() {}

    HLSLMATH_INLINE uint3(uint x, uint y, uint z)
        : x(x)
        , y(y) 
        , z(z) {}

    HLSLMATH_INLINE uint3(uint s)
        : x(s)
        , y(s)
        , z(s) {}

public: // @region: Operators
    HLSLMATH_INLINE uint& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((uint*)this)[index];
    }

    HLSLMATH_INLINE uint  operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((uint*)this)[index];
    }
};
