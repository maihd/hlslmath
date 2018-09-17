//
// @region: Operator overloadng
//

inline int3 operator-(const int3& v)
{
    return int3(-v.x, -v.y, -v.z);
}

inline int3& operator++(int3& v)
{
    ++v.x;
    ++v.y;
    ++v.z;
    return v;
}

inline int3& operator--(int3& v)
{
    --v.x;
    --v.y;
    --v.z;
    return v;
}

inline int3 operator++(int3& v, int)
{
    const int3 result = v;
    v.x++;
    v.y++;
    v.z++;
    return result;
}

inline int3 operator--(int3& v, int)
{
    const int3 result = v;
    v.x--;
    v.y--;
    v.z--;
    return result;
}

inline int3 operator+(const int3& a, const int3& b)
{
    return int3(a.x + b.x, a.y + b.y, a.z + b.z);
}

inline int3 operator-(const int3& a, const int3& b)
{
    return int3(a.x - b.x, a.y - b.y, a.z - b.z);
}

inline int3 operator*(const int3& a, const int3& b)
{
    return int3(a.x * b.x, a.y * b.y, a.z * b.z);
}

inline int3 operator/(const int3& a, const int3& b)
{
    return int3(a.x / b.x, a.y / b.y, a.z / b.z);
}

inline int3 operator+(const int3& a, int b)
{
    return int3(a.x + b, a.y + b, a.z + b);
}

inline int3 operator-(const int3& a, int b)
{
    return int3(a.x - b, a.y - b, a.z - b);
}

inline int3 operator*(const int3& a, int b)
{
    return int3(a.x * b, a.y * b, a.z * b);
}

inline int3 operator/(const int3& a, int b)
{
    return int3(a.x / b, a.y / b, a.z / b);
}

inline int3 operator+(int a, const int3& b)
{
    return int3(a + b.x, a + b.y, a + b.z);
}

inline int3 operator-(int a, const int3& b)
{
    return int3(a - b.x, a - b.y, a - b.z);
}

inline int3 operator*(int a, const int3& b)
{
    return int3(a * b.x, a * b.y, a * b.z);
}

inline int3 operator/(int a, const int3& b)
{
    return int3(a / b.x, a / b.y, a / b.z);
}

inline int3& operator+=(int3& a, int b)
{
    return (a = a + b);
}

inline int3& operator-=(int3& a, int b)
{
    return (a = a - b);
}

inline int3& operator*=(int3& a, int b)
{
    return (a = a * b);
}

inline int3& operator/=(int3& a, int b)
{
    return (a = a / b);
}

inline int3& operator+=(int3& a, const int3& b)
{
    return (a = a + b);
}

inline int3& operator-=(int3& a, const int3& b)
{
    return (a = a - b);
}

inline int3& operator*=(int3& a, const int3& b)
{
    return (a = a * b);
}

inline int3& operator/=(int3& a, const int3& b)
{
    return (a = a / b);
}

inline bool3 operator<(const int3& a, const int3& b)
{
    return bool3(a.x < b.x, a.y < b.y, a.z < b.z);
}

inline bool3 operator>(const int3& a, const int3& b)
{
    return bool3(a.x > b.x, a.y > b.y, a.z > b.z);
}

inline bool3 operator<=(const int3& a, const int3& b)
{
    return bool3(a.x <= b.x, a.y <= b.y, a.z <= b.z);
}

inline bool3 operator>=(const int3& a, const int3& b)
{
    return bool3(a.x >= b.x, a.y >= b.y, a.z >= b.z);
}

inline bool3 operator==(const int3& a, const int3& b)
{
    return bool3(a.x == b.x, a.y == b.y, a.z == b.z);
}

inline bool3 operator!=(const int3& a, const int3& b)
{
    return bool3(a.x != b.x, a.y != b.y, a.z != b.z);
}

//
// @region: Common functions
//

/* Computes sign of 'x'
 */
inline int3 sign(const int3& m)
{
    return int3(sign(m[0]),
                sign(m[1]),
                sign(m[2]));
}

/* Computes absolute value
 */
inline int3 abs(const int3& m)
{
    return int3(abs(m[0]),
                abs(m[1]),
                abs(m[2]));
}

/* Get the smaller value
 */
inline int3 min(const int3& a, const int3& b)
{
    return int3(min(a[0], b[0]),
                min(a[1], b[1]),
                min(a[2], b[2]));
}

/* Get the larger value
 */
inline int3 max(const int3& a, const int3& b)
{
    return int3(max(a[0], b[0]), 
                max(a[1], b[1]),
                max(a[2], b[2]));
}

/* Clamps the 'x' value to the [min, max].
 */
inline int3 clamp(const int3& v, const int3& min, const int3& max)
{
    return int3(clamp(v[0], min[0], max[0]), 
                clamp(v[1], min[1], max[1]), 
                clamp(v[2], min[2], max[2]));
}
