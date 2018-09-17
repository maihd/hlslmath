union float3
{
public: // @region: Fielda
    struct
    {
        float x, y, z;  
    };    

public: // @region: Constructors
    inline float3(float x, float y, float z = 0.0f)
        : x(x)
        , y(y)
        , z(z) {}

    inline explicit float3(float s = 0.0f)
        : float3(s, s, s) {}

public: // @region: Operators
    inline float& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((float*)this)[index];
    }

    inline float  operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((float*)this)[index];
    }
};
