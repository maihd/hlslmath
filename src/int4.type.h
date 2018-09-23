union int4
{
public: // @region: Fields
    struct
    {
        int x, y, z, w;
    };

public: // @region: Constructors
    inline int4(int x, int y, int z, int w)
        : x(x)
        , y(y) 
        , z(z)
        , w(w) {}

    inline explicit int4(int s = 0)
        : x(s)
        , y(s)
        , z(s)
        , w(s) {}

public: // @region: Operators
    inline int& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((int*)this)[index];
    }

    inline int  operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((int*)this)[index];
    }
};
