union uint4
{
public: // @region: Fields
    struct
    {
        uint x, y, z, w;
    };

public: // @region: Constructors
    inline uint4(int x, int y, int z, int w)
        : x(x)
        , y(y) 
        , z(z)
        , w(w) {}

    inline explicit uint4(int s = 0)
        : uint4(s, s, s, s) {}

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
