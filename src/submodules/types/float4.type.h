union float4
{
public: // @region: Fields
    struct
    {
        float x, y, z, w; 
    };

public: // @region: Constructors
    HLSLMATH_CONSTEXPR float4() {}

    HLSLMATH_INLINE float4(const float3& xyz, float w = 0.0f)
        : x(xyz.x)
        , y(xyz.y)
        , z(xyz.z)
        , w(w) {}

    HLSLMATH_INLINE float4(float x, float y, float z, float w)
        : x(x)
        , y(y)
        , z(z)
        , w(w) {}

    HLSLMATH_INLINE float4(float s)
        : x(s)
        , y(s)
        , z(s)
        , w(s) {}

public: // @region: Operators
    HLSLMATH_INLINE float& operator[](int index)
    {
        HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((float*)this)[index];
    }

    HLSLMATH_INLINE float  operator[](int index) const
    {
        HLSLMATH_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((float*)this)[index];
    }

public:
    /* Quaternion from axisangle
     */
    HLSLMATH_INLINE static float4 quat(const float3& axis, float angle);

    /* Convert quaternion to axisangle
     * @note: xyz is axis, w is angle
     */
    HLSLMATH_INLINE static float4 toaxis(const float4& quat);

    /* Convert quaternion to axisangle
     * @note: xyz is axis, w is angle
     */
    HLSLMATH_INLINE static void toaxis(const float4& quat, float3* axis, float* angle)
    {
        float4 axisangle = float4::toaxis(quat);
        if (axis)  *axis = float3(axisangle.x, axisangle.y, axisangle.z);
        if (angle) *angle = axisangle.w;
    }

    /* Quaternion from euler
     */
    HLSLMATH_INLINE static float4 euler(float x, float y, float z);

    /* Quaternion from euler
     */
    HLSLMATH_INLINE static float4 euler(const float3& v)
    {
        return euler(v.x, v.y, v.z);
    }
};
