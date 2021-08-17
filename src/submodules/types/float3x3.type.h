union float3x3
{
    float               data[3][3];

    HLSLMATH_CONSTEXPR  float3x3();
                        float3x3(float s);
                        float3x3(const float3& m0, const float3& m1, const float3& m2);
                        float3x3(
                            float m00, float m01, float m02,
                            float m10, float m11, float m12,
                            float m20, float m21, float m22
                        );
    
    float3&             operator[](int index);
    const float3&       operator[](int index) const;

    static float3x3     identity();

    static float3x3     translation(const float2& v);
    static float3x3     translation(float x, float y);

    static float3x3     rotation(float angle);

    static float3x3     scalation(const float2& v);
    static float3x3     scalation(float x, float y);

    static float3x3     ortho(float l, float r, float b, float t);
};
