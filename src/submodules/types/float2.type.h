union float2
{
    struct
    {
        float           x, y;
    };

    inline              float2(); // Default constructor, do no intialization
                        float2(float s);
                        float2(float x, float y);

                        float2(const float3& v);
    explicit            float2(const float4& v);

                        operator float3() const;
    explicit            operator float4() const;

    float&              operator[](int index);
    float               operator[](int index) const;
};