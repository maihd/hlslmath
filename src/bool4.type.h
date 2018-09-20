union bool4
{
public: // @region: Fields
    struct
    {
        bool x, y, z, w;
    };

public: // @region: Constructors
	inline bool4(bool x, bool y, bool z, bool w)
        : x(x)
        , y(y) 
        , z(z)
        , w(w) {}

    inline explicit bool4(bool s = false)
        : bool4(s, s, s, s) {}

public: // @region: Operators
    inline bool& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((bool*)this)[index];
    }

    inline bool  operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((bool*)this)[index];
    }
};
