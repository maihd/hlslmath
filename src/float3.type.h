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
        : x(s)
        , y(s)
        , z(s) {}

public: // @region: float2 -> float3
    inline float3(const float2& v)
        : x(v.x)
        , y(v.y)
        , z(0) {}

    inline operator float2(void) const
    {
        return float2(x, y);
    }

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
