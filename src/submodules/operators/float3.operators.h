inline float3 operator-(const float3& v)
{
    return float3(-v.x, -v.y, -v.z);
}

inline const float3& operator+(const float3& v)
{
    return v;
}

inline float3& operator--(float3& v)
{
    --v.x;
    --v.y;
    --v.z;
    return v;
}

inline float3& operator++(float3& v)
{
    ++v.x;
    ++v.y;
    ++v.z;
    return v;
}

inline float3 operator--(float3& v, int)
{
    const float3 result = v;

    v.x--;
    v.y--;
    v.z--;

    return result;
}

inline float3 operator++(float3& v, int)
{
    const float3 result = v;

    v.x++;
    v.y++;
    v.z++;

    return result;
}

inline float3 operator+(const float3& a, const float3& b)
{
    return float3(a.x + b.x, a.y + b.y, a.z + b.z);
}

inline float3 operator-(const float3& a, const float3& b)
{
    return float3(a.x - b.x, a.y - b.y, a.z - b.z);
}

inline float3 operator*(const float3& a, const float3& b)
{
    return float3(a.x * b.x, a.y * b.y, a.z * b.z);
}

inline float3 operator/(const float3& a, const float3& b)
{
    return float3(a.x / b.x, a.y / b.y, a.z / b.z);
}

inline float3 operator+(const float3& a, float b)
{
    return float3(a.x + b, a.y + b, a.z + b);
}

inline float3 operator-(const float3& a, float b)
{
    return float3(a.x - b, a.y - b, a.z - b);
}

inline float3 operator*(const float3& a, float b)
{
    return float3(a.x * b, a.y * b, a.z * b);
}

inline float3 operator/(const float3& a, float b)
{
    return float3(a.x / b, a.y / b, a.z / b);
}

inline float3 operator+(float a, const float3& b)
{
    return float3(a + b.x, a + b.y, a + b.z);
}

inline float3 operator-(float a, const float3& b)
{
    return float3(a - b.x, a - b.y, a - b.z);
}

inline float3 operator*(float a, const float3& b)
{
    return float3(a * b.x, a * b.y, a * b.z);
}

inline float3 operator/(float a, const float3& b)
{
    return float3(a / b.x, a / b.y, a / b.z);
}

inline float3& operator+=(float3& a, const float3& b)
{
    return (a = a + b);
}

inline float3& operator+=(float3& a, float b)
{
    return (a = a + b);
}

inline float3& operator-=(float3& a, const float3& b)
{
    return (a = a - b);
}

inline float3& operator-=(float3& a, float b)
{
    return (a = a - b);
}

inline float3& operator*=(float3& a, const float3& b)
{
    return (a = a * b);
}

inline float3& operator*=(float3& a, float b)
{
    return (a = a * b);
}

inline float3& operator/=(float3& a, const float3& b)
{
    return (a = a / b);
}

inline float3& operator/=(float3& a, float b)
{
    return (a = a + b);
}

inline bool3 operator==(const float3& a, const float3& b)
{
    return bool3(a.x == b.x, a.y == b.y, a.z == b.z);
}

inline bool3 operator!=(const float3& a, const float3& b)
{
    return bool3(a.x != b.x, a.y != b.y, a.z != b.z);
}

inline bool3 operator<(const float3& a, const float3& b)
{
    return bool3(a.x < b.x, a.y < b.y, a.z < b.z);
}

inline bool3 operator>(const float3& a, const float3& b)
{
    return bool3(a.x > b.x, a.y > b.y, a.z > b.z);
}

inline bool3 operator<=(const float3& a, const float3& b)
{
    return bool3(a.x <= b.x, a.y <= b.y, a.z <= b.z);
}

inline bool3 operator>=(const float3& a, const float3& b)
{
    return bool3(a.x >= b.x, a.y >= b.y, a.z >= b.z);
}