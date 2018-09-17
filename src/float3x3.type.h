union float3x3
{
public: // @region: Constructors
    inline float3x3(const float3& m0, const float3& m1, const float3& m2)
        : data{ m0, m1, m2 } {}

    inline float3x3(float m00, float m01, float m02,
                    float m10, float m11, float m12,
                    float m20, float m21, float m22)
        : float3x3(float3(m00, m01, m02), 
                   float3(m10, m11, m12),
                   float3(m20, m21, m22)) {}

    inline explicit float3x3(float s = 0.0f)
        : float3x3(s, 0, 0,
                   0, s, 0,
                   0, 0, s) {}
    
public: // @region: Operators
    inline float3& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return data[index];
    }

    inline const float3& operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
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
    
public: // @region: Internal fields
    struct
    {
        float3 data[3];
    };
};
