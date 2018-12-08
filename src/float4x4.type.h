union float4x4
{
public: // @region: Constructors
    inline float4x4() {}

	inline float4x4(const float4& m0, const float4& m1, const float4& m2, const float4& m3)
	{
		(*this)[0] = m0;
		(*this)[1] = m1;
		(*this)[2] = m2;
		(*this)[3] = m3;
	}
    
    inline float4x4(float m00, float m01, float m02, float m03,
                    float m10, float m11, float m12, float m13,
                    float m20, float m21, float m22, float m23,
                    float m30, float m31, float m32, float m33)
    {
        (*this)[0] = float4(m00, m01, m02, m03);
        (*this)[1] = float4(m10, m11, m12, m13);
        (*this)[2] = float4(m20, m21, m22, m23);
        (*this)[3] = float4(m30, m31, m32, m33);
    }

    inline float4x4(float s)
    {
        (*this)[0] = float4(s, s, s, s);
        (*this)[1] = float4(s, s, s, s);
        (*this)[2] = float4(s, s, s, s);
        (*this)[3] = float4(s, s, s, s);
    }
    
public: // @region: Operators
    inline float4& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((float4*)data)[index];
    }

    inline const float4& operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((float4*)data)[index];
    }

public: // @region: Constants
    inline static float4x4 identity()
    {
        return float4x4(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);
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
    
private: // @region: Internal fields
    struct
    {
        float data[4][4];
    };
};