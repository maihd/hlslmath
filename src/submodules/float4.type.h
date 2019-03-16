union float4
{
public: // @region: Fields
    struct
    {
        float x, y, z, w; 
    };

public: // @region: Constructors
    inline float4() {}

    inline float4(const float3& xyz, float w = 0.0f)
        : x(xyz.x)
        , y(xyz.y)
        , z(xyz.z)
        , w(w) {}

    inline float4(float x, float y, float z, float w)
        : x(x)
        , y(y)
        , z(z)
        , w(w) {}

    inline float4(float s)
        : x(s)
        , y(s)
        , z(s)
        , w(s) {}

public: // @region: Operators
    inline float& operator[](int index)
    {
        HLSL_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((float*)this)[index];
    }

    inline float  operator[](int index) const
    {
        HLSL_ASSERT(index > -1 && index < 4, "Index out of range");
        return ((float*)this)[index];
    }

public:
    /* Quaternion from axisangle
     */
    inline static float4 quat(const float3& axis, float angle);

    /* Convert quaternion to axisangle
     * @note: xyz is axis, w is angle
     */
    inline static float4 toaxis(const float4& quat);

    /* Quaternion from euler
     */
    inline static float4 euler(float x, float y, float z);

    /* Quaternion from euler
     */
    inline static float4 euler(const float3& v)
    {
        return euler(v.x, v.y, v.z);
    }
};
