union uint4
{
public: // @region: Fields
    struct
    {
        uint x, y, z, w;
    };

public: // @region: Constructors
    HLSLMATH_CONSTEXPR uint4() {}

    HLSLMATH_INLINE uint4(uint x, uint y, uint z, uint w)
        : x(x)
        , y(y) 
        , z(z)
        , w(w) {}

    HLSLMATH_INLINE uint4(int s)
        : x(s)
        , y(s)
        , z(s)
        , w(s) {}

public: // @region: Operators
    HLSLMATH_INLINE uint& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((uint*)this)[index];
    }

    HLSLMATH_INLINE uint  operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((uint*)this)[index];
    }
};
