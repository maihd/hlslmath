union float4
{
public: // @region: Fields
    struct
    {
        float x, y, z, w; 
    };
    
    struct
    {
        float3 axis;
        float  angle;
    };

public: // @region: Constructors
    inline float4(float x, float y, float z, float w)
        : x(x)
        , y(y)
        , z(z)
        , w(w) {}

    inline explicit float4(float s = 0.0f)
        : float4(s, s, s, s) {}

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
