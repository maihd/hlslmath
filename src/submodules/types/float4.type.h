union float4
{
    struct
    {
        float x, y, z, w; 
    };

    HLSLMATH_CONSTEXPR  float4();
                        float4(float s);
                        float4(const float3& xyz, float w = 0.0f);
                        float4(float x, float y, float z, float w);


    float&              operator[](int index);
    float               operator[](int index) const;

    static float4       quat(const float3& axis, float angle);

    static float4       toaxis(const float4& quat);
    static void         toaxis(const float4& quat, float3* axis, float* angle);

    static float4       euler(const float3& v);
    static float4       euler(float x, float y, float z);
};