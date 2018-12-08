union float4
{
public: // @region: Fields
    struct
    {
        float x, y, z, w; 
    };

public: // @region: Constructors
    inline float4() {}

    inline float4(float x, float y, float z, float w)
        : x(x)
        , y(y)
        , z(z)
        , w(w) {}

    inline explicit float4(float s)
        : x(s)
        , y(s)
        , z(s)
        , w(s) {}

public: // @region: Operators
    inline float& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((float*)this)[index];
    }

    inline float  operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((float*)this)[index];
    }
};
