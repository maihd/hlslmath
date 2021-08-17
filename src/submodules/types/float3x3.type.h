union float3x3
{
public: // @region: Constructors
    HLSLMATH_CONSTEXPR float3x3() {}

	HLSLMATH_INLINE float3x3(const float3& m0, const float3& m1, const float3& m2)
	{
		(*this)[0] = m0;
		(*this)[1] = m1;
		(*this)[2] = m2;
	}

    HLSLMATH_INLINE float3x3(float m00, float m01, float m02,
                    float m10, float m11, float m12,
                    float m20, float m21, float m22)
    {
        (*this)[0] = float3(m00, m01, m02);
        (*this)[1] = float3(m10, m11, m12);
        (*this)[2] = float3(m20, m21, m22);
    }

    HLSLMATH_INLINE float3x3(float s)
    {
        (*this)[0] = float3(s, s, s);
        (*this)[1] = float3(s, s, s);
        (*this)[2] = float3(s, s, s);
    }
    
public: // @region: Operators
    HLSLMATH_INLINE float3& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((float3*)data)[index];
    }

    HLSLMATH_INLINE const float3& operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 3, "Index out of range");
        return ((float3*)data)[index];
    }

public: // @region: Create functions
    HLSLMATH_INLINE static float3x3 identity()
    {
        return float3x3(1, 0, 0, 0, 1, 0, 0, 0, 1);
    }

public: // @region: Graphics functions
    static float3x3 translation(const float2& v);
    static float3x3 translation(float x, float y);

    static float3x3 rotation(float angle);

    static float3x3 scalation(const float2& v);
    static float3x3 scalation(float x, float y);

    static float3x3 ortho(float l, float r, float b, float t);
    
private: // @region: Internal fields
    struct
    {
        float data[3][3];
    };
};
