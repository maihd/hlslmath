union float2x2
{
public: // @region: Constructors
    inline float2x2(const float2& m0, const float2& m1)
        : data{ m0, m1 } {}

    inline float2x2(float m00, float m01, 
                    float m10, float m11)
        : float2x2(float2(m00, m01), 
                   float2(m10, m11)) {}

    inline explicit float2x2(float s = 0.0f)
        : float2x2(s, 0,
                   0, s) {}

public: // @region: Operators
    inline float2& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return data[index];
    }

    inline const float2& operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return data[index];
    }
    
    inline explicit operator float*(void)
    {
        return (float*)this;
    }

    inline explicit operator const float*(void) const
    {
        return (float*)this;
    }
   
public: // @region: Graphics functions
    inline static float2x2 rotate(float angle);
    
public: // @region: Internal fields
    struct
    {
        float2 data[2];
    };
};
