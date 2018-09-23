union bool2
{
public: // @region: Fields
    struct
    {
        bool x, y;
    };

public: // @region: Constructors
    inline bool2(bool x, bool y)
        : x(x)
        , y(y) {}

    inline explicit bool2(bool s = false)
        : x(s)
        , y(s) {}

public: // @region: Operators
    inline bool& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((bool*)this)[index];
    }

    inline int  operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((bool*)this)[index];
    }
};
