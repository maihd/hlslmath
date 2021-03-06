union float2x2
{
public: // @region: Constructors
    inline float2x2() {}

	inline float2x2(const float2& m0, const float2& m1)
	{
		(*this)[0] = m0;
		(*this)[1] = m1;
	}

    inline float2x2(float m00, float m01, 
                    float m10, float m11)
    {
        (*this)[0] = float2(m00, m01);
        (*this)[1] = float2(m10, m11);
    }

    inline float2x2(float s)    
    {
        (*this)[0] = float2(s, s);
        (*this)[1] = float2(s, s);
    }

public: // @region: Operators
    inline float2& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((float2*)data)[index];
    }

    inline const float2& operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((float2*)data)[index];
    }
   
public: // @region: Create functions
    inline static float2x2 identity()
    {
        return float2x2(1, 0, 0, 1);
    }

public: // @region: Graphics functions
    inline static float2x2 rotation(float angle);

    inline static float2x2 scalation(float x);
    inline static float2x2 scalation(const float2& v);
    inline static float2x2 scalation(float x, float y);
    
private: // @region: Internal fields
    struct
    {
        float data[2][2];
    };
};