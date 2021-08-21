union HLSLMATH_ALIGNAS(float2x2)
{
    float               data[2][2];

    inline              float2x2() {} // Default constructor, do no intialization
                        float2x2(float s);
                        float2x2(const float2& m0, const float2& m1);
                        float2x2(float m00, float m01, float m10, float m11);

    float2&             operator[](int index);
    const float2&       operator[](int index) const;
   
    HLSLMATH_DEPRECATED("V1.0", "Move functions in data types to outside")
    static float2x2     identity();

    HLSLMATH_DEPRECATED("V1.0", "Move functions in data types to outside")
    static float2x2     rotation(float angle);

    HLSLMATH_DEPRECATED("V1.0", "Move functions in data types to outside")
    static float2x2     scalation(float x);
    
    HLSLMATH_DEPRECATED("V1.0", "Move functions in data types to outside")
    static float2x2     scalation(const float2& v);
    
    HLSLMATH_DEPRECATED("V1.0", "Move functions in data types to outside")
    static float2x2     scalation(float x, float y);
};