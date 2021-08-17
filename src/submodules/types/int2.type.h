union int2
{
public: // @region: Fields
    struct
    {
        int x, y;
    };

public: // @region: Constructors
    HLSLMATH_CONSTEXPR int2() {}

    HLSLMATH_INLINE int2(int x, int y)
        : x(x)
        , y(y) {}

    HLSLMATH_INLINE int2(int s)
        : x(s)
        , y(s) {}

public: // @region: Operators
    HLSLMATH_INLINE int& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((int*)this)[index];
    }

    HLSLMATH_INLINE int  operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((int*)this)[index];
    }
};
