inline float4 operator-(const float4& v)
{
    return float4(-v.x, -v.y, -v.z, -v.w);
}

inline const float4& operator+(const float4& v)
{
    return v;
}

inline float4& operator--(float4& v)
{
    --v.x;
    --v.y;
    --v.z;
    --v.w;
    return v;
}

inline float4& operator++(float4& v)
{
    ++v.x;
    ++v.y;
    ++v.z;
    ++v.w;
    return v;
}

inline float4 operator--(float4& v, int)
{
    const float4 result = v;

    v.x--;
    v.y--;
    v.z--;
    v.w--;

    return result;
}

inline float4 operator++(float4& v, int)
{
    const float4 result = v;

    v.x++;
    v.y++;
    v.z++;
    v.w++;
    
    return result;
}

inline float4 operator+(const float4& a, const float4& b)
{
    return float4(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
}

inline float4 operator-(const float4& a, const float4& b)
{
    return float4(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
}

inline float4 operator*(const float4& a, const float4& b)
{
    return float4(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w);
}

inline float4 operator/(const float4& a, const float4& b)
{
    return float4(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
}

inline float4 operator+(const float4& a, float b)
{
    return float4(a.x + b, a.y + b, a.z + b, a.w + b);
}

inline float4 operator-(const float4& a, float b)
{
    return float4(a.x - b, a.y - b, a.z - b, a.w - b);
}

inline float4 operator*(const float4& a, float b)
{
    return float4(a.x * b, a.y * b, a.z * b, a.w * b);
}

inline float4 operator/(const float4& a, float b)
{
    return float4(a.x / b, a.y / b, a.z / b, a.w / b);
}

inline float4 operator+(float a, const float4& b)
{
    return float4(a + b.x, a + b.y, a + b.z, a + b.w);
}

inline float4 operator-(float a, const float4& b)
{
    return float4(a - b.x, a - b.y, a - b.z, a - b.w);
}

inline float4 operator*(float a, const float4& b)
{
    return float4(a * b.x, a * b.y, a * b.z, a * b.w);
}

inline float4 operator/(float a, const float4& b)
{
    return float4(a / b.x, a / b.y, a / b.z, a / b.w);
}

inline float4& operator+=(float4& a, const float4& b)
{
    return (a = a + b);
}

inline float4& operator+=(float4& a, float b)
{
    return (a = a + b);
}

inline float4& operator-=(float4& a, const float4& b)
{
    return (a = a - b);
}

inline float4& operator-=(float4& a, float b)
{
    return (a = a - b);
}

inline float4& operator*=(float4& a, const float4& b)
{
    return (a = a * b);
}

inline float4& operator*=(float4& a, float b)
{
    return (a = a * b);
}

inline float4& operator/=(float4& a, const float4& b)
{
    return (a = a / b);
}

inline float4& operator/=(float4& a, float b)
{
    return (a = a + b);
}

inline bool4 operator==(const float4& a, const float4& b)
{
    return bool4(a.x == b.x, a.y == b.y, a.z == b.z, a.w == b.w);
}

inline bool4 operator!=(const float4& a, const float4& b)
{
    return bool4(a.x != b.x, a.y != b.y, a.z != b.z, a.w != b.w);
}

inline bool4 operator<(const float4& a, const float4& b)
{
    return bool4(a.x < b.x, a.y < b.y, a.z < b.z, a.w < b.w);
}

inline bool4 operator>(const float4& a, const float4& b)
{
    return bool4(a.x > b.x, a.y > b.y, a.z > b.z, a.w > b.w);
}

inline bool4 operator<=(const float4& a, const float4& b)
{
    return bool4(a.x <= b.x, a.y <= b.y, a.z <= b.z, a.w <= b.w);
}

inline bool4 operator>=(const float4& a, const float4& b)
{
    return bool4(a.x >= b.x, a.y >= b.y, a.z >= b.z, a.w >= b.w);
}