union float4x4
{
    float               data[4][4];

    HLSLMATH_CONSTEXPR  float4x4();
                        float4x4(float s);
	                    float4x4(
                            const float4& m0, 
                            const float4& m1, 
                            const float4& m2, 
                            const float4& m3
                        );
                        float4x4(
                            float m00, float m01, float m02, float m03,
                            float m10, float m11, float m12, float m13,
                            float m20, float m21, float m22, float m23,
                            float m30, float m31, float m32, float m33
                        );
    
    float4&             operator[](int index);
    const float4&       operator[](int index) const;

    static float4x4     identity();

    static float4x4     scalation(float s);
    static float4x4     scalation(const float2& v);
    static float4x4     scalation(const float3& v);
    static float4x4     scalation(float x, float y, float z = 1.0f);

    static float4x4     translation(const float2& v);
    static float4x4     translation(const float3& v);
    static float4x4     translation(float x, float y, float z = 0.0f);

    static float4x4     rotation(const float4& quaternion);
    static float4x4     rotation(const float3& axis, float angle);
    static float4x4     rotation(float x, float y, float z, float angle);

    static float4x4     rotation_x(float angle);
    static float4x4     rotation_y(float angle);
    static float4x4     rotation_z(float angle);

    static void         decompose(const float4x4& m, float3* scalation, float4* quaternion, float3* translation);
    static void         decompose(const float4x4& m, float3* scalation, float3* axis, float* angle, float3* translation);

    static float4x4     lookat(const float3& eye, const float3& target, const float3& up);

    static float4x4     ortho(float l, float r, float b, float t, float n, float f);
    static float4x4     frustum(float l, float r, float b, float t, float n, float f);
    static float4x4     perspective(float fov, float aspect, float znear, float zfar);
};