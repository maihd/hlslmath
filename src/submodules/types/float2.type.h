union float2
{
public: // @region: Fields
    struct
    {
        float x, y;
    };

public: // @region: Constructors
    HLSLMATH_CONSTEXPR float2() {}

    HLSLMATH_INLINE float2(float x, float y)
        : x(x)
        , y(y) {}

    HLSLMATH_INLINE float2(float s)
        : x(s)
        , y(s) {}

public: // @region: Operators
    HLSLMATH_INLINE float& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((float*)this)[index];
    }

    HLSLMATH_INLINE float  operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 2, "Index out of range");
        return ((float*)this)[index];
    }

#if HLSLMATH_ENABLE_NEON       
public:
    HLSLMATH_INLINE float2(float32x2_t neon_simd)
        : neon_simd(neon_simd) {}

    HLSLMATH_INLINE operator float32x2_t(void) const
    {
        return neon_simd;
    }

private:
    float32x2_t neon_simd;
#endif
};
