inline float3x3 operator-(const float3x3& m)
{
    float3x3 result;
    result[0] = -m[0];
    result[1] = -m[1];
    result[2] = -m[2];
    return result;
}

inline const float3x3& operator+(const float3x3& m)
{
    return m;
}

inline float3x3& operator--(float3x3& m)
{
    --m[0];
    --m[1];
    --m[2];
    return m;
}

inline float3x3& operator++(float3x3& m)
{
    ++m[0];
    ++m[1];
    ++m[2];
    return m;
}

inline const float3x3& operator--(float3x3& m, int)
{
    m[0]--;
    m[1]--;
    m[2]--;
    return m;
}

inline const float3x3& operator++(float3x3& m, int)
{
    m[0]++;
    m[1]++;
    m[2]++;
    return m;
}

inline float3x3 operator+(const float3x3& a, const float3x3& b)
{
    float3x3 result;
    result[0] = a[0] + b[0];
    result[1] = a[1] + b[1];
    result[2] = a[2] + b[2];
    return result;
}

inline float3x3 operator-(const float3x3& a, const float3x3& b)
{
    float3x3 result;
    result[0] = a[0] - b[0];
    result[1] = a[1] - b[1];
    result[2] = a[2] - b[2];
    return result;
}

inline float3x3 operator*(const float3x3& a, const float3x3& b)
{
    float3x3 result;
    result[0] = a[0] * b[0];
    result[1] = a[1] * b[1];
    result[2] = a[2] * b[2];
    return result;
}

inline float3x3 operator/(const float3x3& a, const float3x3& b)
{
    float3x3 result;
    result[0] = a[0] / b[0];
    result[1] = a[1] / b[1];
    result[2] = a[2] / b[2];
    return result;
}

inline float3x3 operator+(const float3x3& a, float b)
{
    float3x3 result;
    result[0] = a[0] + b;
    result[1] = a[1] + b;
    result[2] = a[2] + b;
    return result;
}

inline float3x3 operator-(const float3x3& a, float b)
{
    float3x3 result;
    result[0] = a[0] - b;
    result[1] = a[1] - b;
    result[2] = a[2] - b;
    return result;
}

inline float3x3 operator*(const float3x3& a, float b)
{
    float3x3 result;
    result[0] = a[0] * b;
    result[1] = a[1] * b;
    result[2] = a[2] * b;
    return result;
}

inline float3x3 operator/(const float3x3& a, float b)
{
    float3x3 result;
    result[0] = a[0] / b;
    result[1] = a[1] / b;
    result[2] = a[2] / b;
    return result;
}

inline float3x3 operator+(float a, const float3x3& b)
{
    float3x3 result;
    result[0] = a + b[0];
    result[1] = a + b[1];
    result[2] = a + b[2];
    return result;
}

inline float3x3 operator-(float a, const float3x3& b)
{
    float3x3 result;
    result[0] = a - b[0];
    result[1] = a - b[1];
    result[2] = a - b[2];
    return result;
}

inline float3x3 operator*(float a, const float3x3& b)
{
    float3x3 result;
    result[0] = a * b[0];
    result[1] = a * b[1];
    result[2] = a * b[2];
    return result;
}

inline float3x3 operator/(float a, const float3x3& b)
{
    float3x3 result;
    result[0] = a / b[0];
    result[1] = a / b[1];
    result[2] = a / b[2];
    return result;
}

inline float3x3& operator+=(float3x3& a, const float3x3& b)
{
    return (a = a + b);
}

inline float3x3& operator+=(float3x3& a, float b)
{
    return (a = a + b);
}

inline float3x3& operator-=(float3x3& a, const float3x3& b)
{
    return (a = a - b);
}

inline float3x3& operator-=(float3x3& a, float b)
{
    return (a = a - b);
}

inline float3x3& operator*=(float3x3& a, const float3x3& b)
{
    return (a = a * b);
}

inline float3x3& operator*=(float3x3& a, float b)
{
    return (a = a * b);
}

inline float3x3& operator/=(float3x3& a, const float3x3& b)
{
    return (a = a / b);
}

inline float3x3& operator/=(float3x3& a, float b)
{
    return (a = a + b);
}

inline bool3x3 operator==(const float3x3& a, const float3x3& b)
{
    bool3x3 result;
    result[0] = a[0] == b[0];
    result[1] = a[1] == b[1];
    result[2] = a[2] == b[2];
    return result;
}

inline bool3x3 operator!=(const float3x3& a, const float3x3& b)
{
    bool3x3 result;
    result[0] = a[0] != b[0];
    result[1] = a[1] != b[1];
    result[2] = a[2] != b[2];
    return result;
}

inline bool3x3 operator<(const float3x3& a, const float3x3& b)
{
    bool3x3 result;
    result[0] = a[0] < b[0];
    result[1] = a[1] < b[1];
    result[2] = a[2] < b[2];
    return result;
}

inline bool3x3 operator>(const float3x3& a, const float3x3& b)
{
    bool3x3 result;
    result[0] = a[0] > b[0];
    result[1] = a[1] > b[1];
    result[2] = a[2] > b[2];
    return result;
}

inline bool3x3 operator<=(const float3x3& a, const float3x3& b)
{
    bool3x3 result;
    result[0] = a[0] <= b[0];
    result[1] = a[1] <= b[1];
    result[2] = a[2] <= b[2];
    return result;
}

inline bool3x3 operator>=(const float3x3& a, const float3x3& b)
{
    bool3x3 result;
    result[0] = a[0] >= b[0];
    result[1] = a[1] >= b[1];
    result[2] = a[2] >= b[2];
    return result;
}