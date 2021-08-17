union float2x2
{
    float               data[2][2];

    HLSLMATH_CONSTEXPR  float2x2();
                        float2x2(float s);
                        float2x2(const float2& m0, const float2& m1);
                        float2x2(float m00, float m01, float m10, float m11);

    float2&             operator[](int index);
    const float2&       operator[](int index) const;
   
    static float2x2     identity();

    static float2x2     rotation(float angle);

    static float2x2     scalation(float x);
    static float2x2     scalation(const float2& v);
    static float2x2     scalation(float x, float y);
};