union HLSLMATH_ALIGNAS(float3)
{
    struct
    {
        float           x, y, z;  
    };

    inline              float3(); // Default constructor, do no intialization
                        float3(float s);
                        float3(float x, float y, float z = 0.0f);

                        float3(const float2& v);
    explicit            float3(const float4& v);

                        operator float2(void) const;
    explicit            operator float4(void) const;

    float&              operator[](int index);
    float               operator[](int index) const;
};