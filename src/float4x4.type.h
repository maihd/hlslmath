union float4x4
{
public: // @region: Constructors
    inline float4x4(const float4& m0, const float4& m1, const float4& m2, const float4& m3)
        : data{ m0, m1, m2, m3 } {}
    
    inline float4x4(float m00, float m01, float m02, float m03,
                    float m10, float m11, float m12, float m13,
                    float m20, float m21, float m22, float m23,
                    float m30, float m31, float m32, float m33)
        : float4x4(float4(m00, m01, m02, m03),
                   float4(m10, m11, m12, m13),
                   float4(m20, m21, m22, m23),
                   float4(m30, m31, m32, m33)) {}

    inline explicit float4x4(float s = 0.0f)
        : float4x4(s, 0, 0, 0,
                   0, s, 0, 0,
                   0, 0, s, 0,
                   0, 0, 0, s) {}
    
public: // @region: Operators
    inline float4& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 4, "Index out of range");
        return data[index];
    }

    inline const float4& operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 4, "Index out of range");
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
    static float4x4 scale(float s);
    static float4x4 scale(const float2& v);
    static float4x4 scale(const float3& v);
    static float4x4 scale(float x, float y, float z = 1.0f);

    static float4x4 translate(const float2& v);
    static float4x4 translate(const float3& v);
    static float4x4 translate(float x, float y, float z = 0.0f);

    static float4x4 rotate(const float3& axis, float angle);
    static float4x4 rotate(float x, float y, float z, float angle);

    static float4x4 rotatex(float angle);
    static float4x4 rotatey(float angle);
    static float4x4 rotatez(float angle);

    static float4x4 lookat(const float3& eye, const float3& target, const float3& up);

    static float4x4 ortho(float l, float r, float b, float t, float n, float f);
    static float4x4 frustum(float l, float r, float b, float t, float n, float f);
    static float4x4 perspective(float fov, float aspect, float znear, float zfar);
    
public: // @region: Internal fields
    struct
    {
        float4 data[4];
    };
};
