union int2
{
public: // @region: Fields
    struct
    {
        int x, y;
    };

public: // @region: Constructors
    inline int2() {}

    inline int2(int x, int y)
        : x(x)
        , y(y) {}

    inline int2(int s)
        : x(s)
        , y(s) {}

public: // @region: Operators
    inline int& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((int*)this)[index];
    }

    inline int  operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((int*)this)[index];
    }
};
