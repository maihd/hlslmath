//
// @region: Operators overloading
//

inline int3x3 operator-(const int3x3& m)
{
    int3x3 result;
    result[0] = -m[0];
    result[1] = -m[1];
    result[2] = -m[2];
    return result;
}

inline const int3x3& operator+(const int3x3& m)
{
    return m;
}

inline int3x3& operator--(int3x3& m)
{
    --m[0];
    --m[1];
    --m[2];
    return m;
}

inline int3x3& operator++(int3x3& m)
{
    ++m[0];
    ++m[1];
    ++m[2];
    return m;
}

inline const int3x3& operator--(int3x3& m, int)
{
    m[0]--;
    m[1]--;
    m[2]--;
    return m;
}

inline const int3x3& operator++(int3x3& m, int)
{
    m[0]++;
    m[1]++;
    m[2]++;
    return m;
}

inline int3x3 operator+(const int3x3& a, const int3x3& b)
{
    int3x3 result;
    result[0] = a[0] + b[0];
    result[1] = a[1] + b[1];
    result[2] = a[2] + b[2];
    return result;
}

inline int3x3 operator-(const int3x3& a, const int3x3& b)
{
    int3x3 result;
    result[0] = a[0] - b[0];
    result[1] = a[1] - b[1];
    result[2] = a[2] - b[2];
    return result;
}

inline int3x3 operator*(const int3x3& a, const int3x3& b)
{
    int3x3 result;
    result[0] = a[0] * b[0];
    result[1] = a[1] * b[1];
    result[2] = a[2] * b[2];
    return result;
}

inline int3x3 operator/(const int3x3& a, const int3x3& b)
{
    int3x3 result;
    result[0] = a[0] / b[0];
    result[1] = a[1] / b[1];
    result[2] = a[2] / b[2];
    return result;
}

inline int3x3 operator+(const int3x3& a, int b)
{
    int3x3 result;
    result[0] = a[0] + b;
    result[1] = a[1] + b;
    result[2] = a[2] + b;
    return result;
}

inline int3x3 operator-(const int3x3& a, int b)
{
    int3x3 result;
    result[0] = a[0] - b;
    result[1] = a[1] - b;
    result[2] = a[2] - b;
    return result;
}

inline int3x3 operator*(const int3x3& a, int b)
{
    int3x3 result;
    result[0] = a[0] * b;
    result[1] = a[1] * b;
    result[2] = a[2] * b;
    return result;
}

inline int3x3 operator/(const int3x3& a, int b)
{
    int3x3 result;
    result[0] = a[0] / b;
    result[1] = a[1] / b;
    result[2] = a[2] / b;
    return result;
}

inline int3x3 operator+(int a, const int3x3& b)
{
    int3x3 result;
    result[0] = a + b[0];
    result[1] = a + b[1];
    result[2] = a + b[2];
    return result;
}

inline int3x3 operator-(int a, const int3x3& b)
{
    int3x3 result;
    result[0] = a - b[0];
    result[1] = a - b[1];
    result[2] = a - b[2];
    return result;
}

inline int3x3 operator*(int a, const int3x3& b)
{
    int3x3 result;
    result[0] = a * b[0];
    result[1] = a * b[1];
    result[2] = a * b[2];
    return result;
}

inline int3x3 operator/(int a, const int3x3& b)
{
    int3x3 result;
    result[0] = a / b[0];
    result[1] = a / b[1];
    result[2] = a / b[2];
    return result;
}

inline int3x3& operator+=(int3x3& a, const int3x3& b)
{
    return (a = a + b);
}

inline int3x3& operator+=(int3x3& a, int b)
{
    return (a = a + b);
}

inline int3x3& operator-=(int3x3& a, const int3x3& b)
{
    return (a = a - b);
}

inline int3x3& operator-=(int3x3& a, int b)
{
    return (a = a - b);
}

inline int3x3& operator*=(int3x3& a, const int3x3& b)
{
    return (a = a * b);
}

inline int3x3& operator*=(int3x3& a, int b)
{
    return (a = a * b);
}

inline int3x3& operator/=(int3x3& a, const int3x3& b)
{
    return (a = a / b);
}

inline int3x3& operator/=(int3x3& a, int b)
{
    return (a = a + b);
}

inline bool3x3 operator==(const int3x3& a, const int3x3& b)
{
    bool3x3 result;
    result[0] = a[0] == b[0];
    result[1] = a[1] == b[1];
    result[2] = a[2] == b[2];
    return result;
}

inline bool3x3 operator!=(const int3x3& a, const int3x3& b)
{
    bool3x3 result;
    result[0] = a[0] != b[0];
    result[1] = a[1] != b[1];
    result[2] = a[2] != b[2];
    return result;
}

inline bool3x3 operator<(const int3x3& a, const int3x3& b)
{
    bool3x3 result;
    result[0] = a[0] < b[0];
    result[1] = a[1] < b[1];
    result[2] = a[2] < b[2];
    return result;
}

inline bool3x3 operator>(const int3x3& a, const int3x3& b)
{
    bool3x3 result;
    result[0] = a[0] > b[0];
    result[1] = a[1] > b[1];
    result[2] = a[2] > b[2];
    return result;
}

inline bool3x3 operator<=(const int3x3& a, const int3x3& b)
{
    bool3x3 result;
    result[0] = a[0] <= b[0];
    result[1] = a[1] <= b[1];
    result[2] = a[2] <= b[2];
    return result;
}

inline bool3x3 operator>=(const int3x3& a, const int3x3& b)
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

/* Computes sign of 'x'
 */
inline int3x3 sign(const int3x3& m)
{
    return int3x3(sign(m[0]),
                  sign(m[1]),
                  sign(m[2]));
}

/* Computes absolute value
 */
inline int3x3 abs(const int3x3& m)
{
    return int3x3(abs(m[0]),
                  abs(m[1]),
                  abs(m[2]));
}

/* Get the smaller value
 */
inline int3x3 min(const int3x3& a, const int3x3& b)
{
    return int3x3(min(a[0], b[0]),
                  min(a[1], b[1]),
                  min(a[2], b[2]));
}

/* Get the larger value
 */
inline int3x3 max(const int3x3& a, const int3x3& b)
{
    return int3x3(max(a[0], b[0]), 
                  max(a[1], b[1]),
                  max(a[2], b[2]));
}

/* Clamps the 'x' value to the [min, max].
 */
inline int3x3 clamp(const int3x3& v, const int3x3& min, const int3x3& max)
{
    return int3x3(clamp(v[0], min[0], max[0]), 
                  clamp(v[1], min[1], max[1]), 
                  clamp(v[2], min[2], max[2]));
}
