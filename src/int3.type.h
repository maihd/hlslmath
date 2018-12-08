union int3
{
public: // @region: Fields
    struct
    {
        int x, y, z;
    };

public: // @region: Constructors
    inline int3() {}

    inline int3(int x, int y, int z)
        : x(x)
        , y(y) 
        , z(z) {}

    inline int3(int s)
        : x(s)
        , y(s)
        , z(s) {}

public: // @region: Fields
    inline int& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((int*)this)[index];
    }

    inline int  operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((int*)this)[index];
    }
};
