union int4
{
public: // @region: Fields
    struct
    {
        int x, y, z, w;
    };

public: // @region: Constructors
    HLSLMATH_CONSTEXPR int4() {}

    HLSLMATH_INLINE int4(int x, int y, int z, int w)
        : x(x)
        , y(y) 
        , z(z)
        , w(w) {}

    HLSLMATH_INLINE int4(int s)
        : x(s)
        , y(s)
        , z(s)
        , w(s) {}

public: // @region: Operators
    HLSLMATH_INLINE int& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((int*)this)[index];
    }

    HLSLMATH_INLINE int  operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((int*)this)[index];
    }
};
