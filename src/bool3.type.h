union bool3
{
public: // @region: Fields
    struct
    {
        bool x, y, z;
    };

public: // @region: Constructors
    inline bool3(bool x, bool y, bool z)
        : x(x)
        , y(y) 
        , z(z) {}

    inline explicit bool3(bool s = false)
        : x(s)
        , y(s)
        , z(s) {}

public: // @region: Operators
    inline bool& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((bool*)this)[index];
    }

    inline bool  operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((bool*)this)[index];
    }
};
