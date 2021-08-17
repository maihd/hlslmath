HLSLMATH_INLINE float3 operator-(const float3& v)
{
    return float3(-v.x, -v.y, -v.z);
}

HLSLMATH_INLINE const float3& operator+(const float3& v)
{
    return v;
}

HLSLMATH_INLINE float3& operator--(float3& v)
{
    --v.x;
    --v.y;
    --v.z;
    return v;
}

HLSLMATH_INLINE float3& operator++(float3& v)
{
    ++v.x;
    ++v.y;
    ++v.z;
    return v;
}

HLSLMATH_INLINE float3 operator--(float3& v, int)
{
    const float3 result = v;

    v.x--;
    v.y--;
    v.z--;

    return result;
}

HLSLMATH_INLINE float3 operator++(float3& v, int)
{
    const float3 result = v;

    v.x++;
    v.y++;
    v.z++;

    return result;
}

HLSLMATH_INLINE float3 operator+(const float3& a, const float3& b)
{
    return float3(a.x + b.x, a.y + b.y, a.z + b.z);
}

HLSLMATH_INLINE float3 operator-(const float3& a, const float3& b)
{
    return float3(a.x - b.x, a.y - b.y, a.z - b.z);
}

HLSLMATH_INLINE float3 operator*(const float3& a, const float3& b)
{
    return float3(a.x * b.x, a.y * b.y, a.z * b.z);
}

HLSLMATH_INLINE float3 operator/(const float3& a, const float3& b)
{
    return float3(a.x / b.x, a.y / b.y, a.z / b.z);
}

HLSLMATH_INLINE float3 operator+(const float3& a, float b)
{
    return float3(a.x + b, a.y + b, a.z + b);
}

HLSLMATH_INLINE float3 operator-(const float3& a, float b)
{
    return float3(a.x - b, a.y - b, a.z - b);
}

HLSLMATH_INLINE float3 operator*(const float3& a, float b)
{
    return float3(a.x * b, a.y * b, a.z * b);
}

HLSLMATH_INLINE float3 operator/(const float3& a, float b)
{
    return float3(a.x / b, a.y / b, a.z / b);
}

HLSLMATH_INLINE float3 operator+(float a, const float3& b)
{
    return float3(a + b.x, a + b.y, a + b.z);
}

HLSLMATH_INLINE float3 operator-(float a, const float3& b)
{
    return float3(a - b.x, a - b.y, a - b.z);
}

HLSLMATH_INLINE float3 operator*(float a, const float3& b)
{
    return float3(a * b.x, a * b.y, a * b.z);
}

HLSLMATH_INLINE float3 operator/(float a, const float3& b)
{
    return float3(a / b.x, a / b.y, a / b.z);
}

HLSLMATH_INLINE float3& operator+=(float3& a, const float3& b)
{
    return (a = a + b);
}

HLSLMATH_INLINE float3& operator+=(float3& a, float b)
{
    return (a = a + b);
}

HLSLMATH_INLINE float3& operator-=(float3& a, const float3& b)
{
    return (a = a - b);
}

HLSLMATH_INLINE float3& operator-=(float3& a, float b)
{
    return (a = a - b);
}

HLSLMATH_INLINE float3& operator*=(float3& a, const float3& b)
{
    return (a = a * b);
}

HLSLMATH_INLINE float3& operator*=(float3& a, float b)
{
    return (a = a * b);
}

HLSLMATH_INLINE float3& operator/=(float3& a, const float3& b)
{
    return (a = a / b);
}

HLSLMATH_INLINE float3& operator/=(float3& a, float b)
{
    return (a = a + b);
}

HLSLMATH_INLINE bool3 operator==(const float3& a, const float3& b)
{
    return bool3(a.x == b.x, a.y == b.y, a.z == b.z);
}

HLSLMATH_INLINE bool3 operator!=(const float3& a, const float3& b)
{
    return bool3(a.x != b.x, a.y != b.y, a.z != b.z);
}

HLSLMATH_INLINE bool3 operator<(const float3& a, const float3& b)
{
    return bool3(a.x < b.x, a.y < b.y, a.z < b.z);
}

HLSLMATH_INLINE bool3 operator>(const float3& a, const float3& b)
{
    return bool3(a.x > b.x, a.y > b.y, a.z > b.z);
}

HLSLMATH_INLINE bool3 operator<=(const float3& a, const float3& b)
{
    return bool3(a.x <= b.x, a.y <= b.y, a.z <= b.z);
}

HLSLMATH_INLINE bool3 operator>=(const float3& a, const float3& b)
{
    return bool3(a.x >= b.x, a.y >= b.y, a.z >= b.z);
}