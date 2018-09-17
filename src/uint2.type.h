union uint2
{
public: // @region: Fields
    struct
    {
        uint x, y;
    };

public: // @region: Constructors
    inline uint2(uint x, uint y)
        : x(x)
        , y(y) {}

    inline explicit uint2(uint s = 0)
        : uint2(s, s) {}

public: // @region: Operators
    inline uint& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((uint*)this)[index];
    }

    inline uint  operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((uint*)this)[index];
    }
};
