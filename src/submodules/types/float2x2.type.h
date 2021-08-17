union float2x2
{
public: // @region: Constructors
    HLSLMATH_CONSTEXPR float2x2() {}

	HLSLMATH_INLINE float2x2(const float2& m0, const float2& m1)
	{
		(*this)[0] = m0;
		(*this)[1] = m1;
	}

    HLSLMATH_INLINE float2x2(float m00, float m01, 
                    float m10, float m11)
    {
        (*this)[0] = float2(m00, m01);
        (*this)[1] = float2(m10, m11);
    }

    HLSLMATH_INLINE float2x2(float s)    
    {
        (*this)[0] = float2(s, s);
        (*this)[1] = float2(s, s);
    }

public: // @region: Operators
    HLSLMATH_INLINE float2& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((float2*)data)[index];
    }

    HLSLMATH_INLINE const float2& operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((float2*)data)[index];
    }
   
public: // @region: Create functions
    HLSLMATH_INLINE static float2x2 identity()
    {
        return float2x2(1, 0, 0, 1);
    }

public: // @region: Graphics functions
    static float2x2 rotation(float angle);

    static float2x2 scalation(float x);
    static float2x2 scalation(const float2& v);
    static float2x2 scalation(float x, float y);
    
private: // @region: Internal fields
    struct
    {
        float data[2][2];
    };
};