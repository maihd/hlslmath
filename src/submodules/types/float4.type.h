union HLSLMATH_ALIGNAS(float4)
{
    struct
    {
        float x, y, z, w; 
    };

    inline              float4() {} // Default constructor, do no intialization
                        float4(float s);
                        float4(const float3& xyz, float w = 0.0f);
                        float4(float x, float y, float z, float w);

    float&              operator[](int index);
    float               operator[](int index) const;

    HLSLMATH_DEPRECATED("V1.0", "Move functions in data types to outside")
    static float4       quat(const float3& axis, float angle);

    HLSLMATH_DEPRECATED("V1.0", "Move functions in data types to outside")
    static float4       toaxis(const float4& quat);

    HLSLMATH_DEPRECATED("V1.0", "Move functions in data types to outside")
    static void         toaxis(const float4& quat, float3* axis, float* angle);

    HLSLMATH_DEPRECATED("V1.0", "Move functions in data types to outside")
    static float4       euler(const float3& v);
    
    HLSLMATH_DEPRECATED("V1.0", "Move functions in data types to outside")
    static float4       euler(float x, float y, float z);
};