union uint4
{
public: // @region: Fields
    struct
    {
        uint x, y, z, w;
    };

public: // @region: Constructors
    inline uint4(uint x, uint y, uint z, uint w)
        : x(x)
        , y(y) 
        , z(z)
        , w(w) {}

    inline explicit uint4(int s = 0)
        : x(s)
        , y(s)
        , z(s)
        , w(s) {}

public: // @region: Operators
    inline uint& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((uint*)this)[index];
    }

    inline uint  operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((uint*)this)[index];
    }
};
