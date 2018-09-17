//
// @region: Operators overloading
//

inline const uint3x3& operator+(const uint3x3& m)
{
    return m;
}

inline uint3x3& operator--(uint3x3& m)
{
    --m[0];
    --m[1];
    --m[2];
    return m;
}

inline uint3x3& operator++(uint3x3& m)
{
    ++m[0];
    ++m[1];
    ++m[2];
    return m;
}

inline const uint3x3& operator--(uint3x3& m, int)
{
    m[0]--;
    m[1]--;
    m[2]--;
    return m;
}

inline const uint3x3& operator++(uint3x3& m, int)
{
    m[0]++;
    m[1]++;
    m[2]++;
    return m;
}

inline uint3x3 operator+(const uint3x3& a, const uint3x3& b)
{
    uint3x3 result;
    result[0] = a[0] + b[0];
    result[1] = a[1] + b[1];
    result[2] = a[2] + b[2];
    return result;
}

inline uint3x3 operator-(const uint3x3& a, const uint3x3& b)
{
    uint3x3 result;
    result[0] = a[0] - b[0];
    result[1] = a[1] - b[1];
    result[2] = a[2] - b[2];
    return result;
}

inline uint3x3 operator*(const uint3x3& a, const uint3x3& b)
{
    uint3x3 result;
    result[0] = a[0] * b[0];
    result[1] = a[1] * b[1];
    result[2] = a[2] * b[2];
    return result;
}

inline uint3x3 operator/(const uint3x3& a, const uint3x3& b)
{
    uint3x3 result;
    result[0] = a[0] / b[0];
    result[1] = a[1] / b[1];
    result[2] = a[2] / b[2];
    return result;
}

inline uint3x3 operator+(const uint3x3& a, uint b)
{
    uint3x3 result;
    result[0] = a[0] + b;
    result[1] = a[1] + b;
    result[2] = a[2] + b;
    return result;
}

inline uint3x3 operator-(const uint3x3& a, uint b)
{
    uint3x3 result;
    result[0] = a[0] - b;
    result[1] = a[1] - b;
    result[2] = a[2] - b;
    return result;
}

inline uint3x3 operator*(const uint3x3& a, uint b)
{
    uint3x3 result;
    result[0] = a[0] * b;
    result[1] = a[1] * b;
    result[2] = a[2] * b;
    return result;
}

inline uint3x3 operator/(const uint3x3& a, uint b)
{
    uint3x3 result;
    result[0] = a[0] / b;
    result[1] = a[1] / b;
    result[2] = a[2] / b;
    return result;
}

inline uint3x3 operator+(uint a, const uint3x3& b)
{
    uint3x3 result;
    result[0] = a + b[0];
    result[1] = a + b[1];
    result[2] = a + b[2];
    return result;
}

inline uint3x3 operator-(uint a, const uint3x3& b)
{
    uint3x3 result;
    result[0] = a - b[0];
    result[1] = a - b[1];
    result[2] = a - b[2];
    return result;
}

inline uint3x3 operator*(uint a, const uint3x3& b)
{
    uint3x3 result;
    result[0] = a * b[0];
    result[1] = a * b[1];
    result[2] = a * b[2];
    return result;
}

inline uint3x3 operator/(uint a, const uint3x3& b)
{
    uint3x3 result;
    result[0] = a / b[0];
    result[1] = a / b[1];
    result[2] = a / b[2];
    return result;
}

inline uint3x3& operator+=(uint3x3& a, const uint3x3& b)
{
    return (a = a + b);
}

inline uint3x3& operator+=(uint3x3& a, uint b)
{
    return (a = a + b);
}

inline uint3x3& operator-=(uint3x3& a, const uint3x3& b)
{
    return (a = a - b);
}

inline uint3x3& operator-=(uint3x3& a, uint b)
{
    return (a = a - b);
}

inline uint3x3& operator*=(uint3x3& a, const uint3x3& b)
{
    return (a = a * b);
}

inline uint3x3& operator*=(uint3x3& a, uint b)
{
    return (a = a * b);
}

inline uint3x3& operator/=(uint3x3& a, const uint3x3& b)
{
    return (a = a / b);
}

inline uint3x3& operator/=(uint3x3& a, uint b)
{
    return (a = a + b);
}

inline bool3x3 operator==(const uint3x3& a, const uint3x3& b)
{
    bool3x3 result;
    result[0] = a[0] == b[0];
    result[1] = a[1] == b[1];
    result[2] = a[2] == b[2];
    return result;
}

inline bool3x3 operator!=(const uint3x3& a, const uint3x3& b)
{
    bool3x3 result;
    result[0] = a[0] != b[0];
    result[1] = a[1] != b[1];
    result[2] = a[2] != b[2];
    return result;
}

inline bool3x3 operator<(const uint3x3& a, const uint3x3& b)
{
    bool3x3 result;
    result[0] = a[0] < b[0];
    result[1] = a[1] < b[1];
    result[2] = a[2] < b[2];
    return result;
}

inline bool3x3 operator>(const uint3x3& a, const uint3x3& b)
{
    bool3x3 result;
    result[0] = a[0] > b[0];
    result[1] = a[1] > b[1];
    result[2] = a[2] > b[2];
    return result;
}

inline bool3x3 operator<=(const uint3x3& a, const uint3x3& b)
{
    bool3x3 result;
    result[0] = a[0] <= b[0];
    result[1] = a[1] <= b[1];
    result[2] = a[2] <= b[2];
    return result;
}

inline bool3x3 operator>=(const uint3x3& a, const uint3x3& b)
{
    bool3x3 result;
    result[0] = a[0] >= b[0];
    result[1] = a[1] >= b[1];
    result[2] = a[2] >= b[2];
    return result;
}
//
// @region: Common functions
//

/* Get the smaller value
 */
inline uint3x3 min(const uint3x3& a, const uint3x3& b)
{
    return uint3x3(min(a[0], b[0]),
                   min(a[1], b[1]),
                   min(a[2], b[2]));
}

/* Get the larger value
 */
inline uint3x3 max(const uint3x3& a, const uint3x3& b)
{
    return uint3x3(max(a[0], b[0]), 
                   max(a[1], b[1]),
                   max(a[2], b[2]));
}

/* Clamps the 'x' value to the [min, max].
 */
inline uint3x3 clamp(const uint3x3& v, const uint3x3& min, const uint3x3& max)
{
    return uint3x3(clamp(v[0], min[0], max[0]), 
                   clamp(v[1], min[1], max[1]), 
                   clamp(v[2], min[2], max[2]));
}
