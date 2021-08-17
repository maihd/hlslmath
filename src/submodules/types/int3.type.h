union int3
{
public: // @region: Fields
    struct
    {
        int x, y, z;
    };

public: // @region: Constructors
    HLSLMATH_CONSTEXPR int3() {}

    HLSLMATH_INLINE int3(int x, int y, int z)
        : x(x)
        , y(y) 
        , z(z) {}

    HLSLMATH_INLINE int3(int s)
        : x(s)
        , y(s)
        , z(s) {}

public: // @region: Fields
    HLSLMATH_INLINE int& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((int*)this)[index];
    }

    HLSLMATH_INLINE int  operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((int*)this)[index];
    }
};
