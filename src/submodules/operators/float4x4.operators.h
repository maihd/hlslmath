inline float4x4 operator-(const float4x4& m)
{
    float4x4 result;
    result[0] = -m[0];
    result[1] = -m[1];
    result[2] = -m[2];
    result[3] = -m[3];
    return result;
}

inline const float4x4& operator+(const float4x4& m)
{
    return m;
}

inline float4x4& operator--(float4x4& m)
{
    --m[0];
    --m[1];
    --m[2];
    --m[3];
    return m;
}

inline float4x4& operator++(float4x4& m)
{
    ++m[0];
    ++m[1];
    ++m[2];
    ++m[3];
    return m;
}

inline const float4x4& operator--(float4x4& m, int)
{
    m[0]--;
    m[1]--;
    m[2]--;
    m[3]--;
    return m;
}

inline const float4x4& operator++(float4x4& m, int)
{
    m[0]++;
    m[1]++;
    m[2]++;
    m[3]++;
    return m;
}

inline float4x4 operator+(const float4x4& a, const float4x4& b)
{
    float4x4 result;
    result[0] = a[0] + b[0];
    result[1] = a[1] + b[1];
    result[2] = a[2] + b[2];
    result[3] = a[3] + b[3];
    return result;
}

inline float4x4 operator+(const float4x4& a, float b)
{
    float4x4 result;
    result[0] = a[0] + b;
    result[1] = a[1] + b;
    result[2] = a[2] + b;
    result[3] = a[3] + b;
    return result;
}

inline float4x4 operator+(float a, const float4x4& b)
{
    float4x4 result;
    result[0] = a + b[0];
    result[1] = a + b[1];
    result[2] = a + b[2];
    result[3] = a + b[3];
    return result;
}

inline float4x4 operator-(const float4x4& a, const float4x4& b)
{
    float4x4 result;
    result[0] = a[0] - b[0];
    result[1] = a[1] - b[1];
    result[2] = a[2] - b[2];
    result[3] = a[3] - b[3];
    return result;
}

inline float4x4 operator-(const float4x4& a, float b)
{
    float4x4 result;
    result[0] = a[0] - b;
    result[1] = a[1] - b;
    result[2] = a[2] - b;
    result[3] = a[3] - b;
    return result;
}

inline float4x4 operator-(float a, const float4x4& b)
{
    float4x4 result;
    result[0] = a - b[0];
    result[1] = a - b[1];
    result[2] = a - b[2];
    result[3] = a - b[3];
    return result;
}

inline float4x4 operator*(const float4x4& a, const float4x4& b)
{
    float4x4 result;
    result[0] = a[0] * b[0];
    result[1] = a[1] * b[1];
    result[2] = a[2] * b[2];
    result[3] = a[3] * b[3];
    return result;
}

inline float4x4 operator*(const float4x4& a, float b)
{
    float4x4 result;
    result[0] = a[0] * b;
    result[1] = a[1] * b;
    result[2] = a[2] * b;
    result[3] = a[3] * b;
    return result;
}

inline float4x4 operator*(float a, const float4x4& b)
{
    float4x4 result;
    result[0] = a * b[0];
    result[1] = a * b[1];
    result[2] = a * b[2];
    result[3] = a * b[3];
    return result;
}

inline float4x4 operator/(const float4x4& a, const float4x4& b)
{
    float4x4 result;
    result[0] = a[0] / b[0];
    result[1] = a[1] / b[1];
    result[2] = a[2] / b[2];
    result[3] = a[3] / b[3];
    return result;
}

inline float4x4 operator/(const float4x4& a, float b)
{
    float4x4 result;
    result[0] = a[0] / b;
    result[1] = a[1] / b;
    result[2] = a[2] / b;
    result[3] = a[3] / b;
    return result;
}

inline float4x4 operator/(float a, const float4x4& b)
{
    float4x4 result;
    result[0] = a / b[0];
    result[1] = a / b[1];
    result[2] = a / b[2];
    result[3] = a / b[3];
    return result;
}

inline float4x4& operator+=(float4x4& a, const float4x4& b)
{
    return (a = a + b);
}

inline float4x4& operator+=(float4x4& a, float b)
{
    return (a = a + b);
}

inline float4x4& operator-=(float4x4& a, const float4x4& b)
{
    return (a = a - b);
}

inline float4x4& operator-=(float4x4& a, float b)
{
    return (a = a - b);
}

inline float4x4& operator*=(float4x4& a, const float4x4& b)
{
    return (a = a * b);
}

inline float4x4& operator*=(float4x4& a, float b)
{
    return (a = a * b);
}

inline float4x4& operator/=(float4x4& a, const float4x4& b)
{
    return (a = a / b);
}

inline float4x4& operator/=(float4x4& a, float b)
{
    return (a = a + b);
}

inline bool4x4 operator==(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] == b[0];
    result[1] = a[1] == b[1];
    result[2] = a[2] == b[2];
    result[3] = a[3] == b[3];
    return result;
}

inline bool4x4 operator!=(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] != b[0];
    result[1] = a[1] != b[1];
    result[2] = a[2] != b[2];
    result[3] = a[3] != b[3];
    return result;
}

inline bool4x4 operator<(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] < b[0];
    result[1] = a[1] < b[1];
    result[2] = a[2] < b[2];
    result[3] = a[3] < b[3];
    return result;
}

inline bool4x4 operator>(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] > b[0];
    result[1] = a[1] > b[1];
    result[2] = a[2] > b[2];
    result[3] = a[3] > b[3];
    return result;
}

inline bool4x4 operator<=(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] <= b[0];
    result[1] = a[1] <= b[1];
    result[2] = a[2] <= b[2];
    result[3] = a[3] <= b[3];
    return result;
}

inline bool4x4 operator>=(const float4x4& a, const float4x4& b)
{
    bool4x4 result;
    result[0] = a[0] >= b[0];
    result[1] = a[1] >= b[1];
    result[2] = a[2] >= b[2];
    result[3] = a[3] >= b[3];
    return result;
}