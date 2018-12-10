//
// @region: Operator overloadng
//

inline uint3& operator++(uint3& v)
{
    ++v.x;
    ++v.y;
    ++v.z;
    return v;
}

inline uint3& operator--(uint3& v)
{
    --v.x;
    --v.y;
    --v.z;
    return v;
}

inline uint3 operator++(uint3& v, int)
{
    const uint3 result = v;
    v.x++;
    v.y++;
    v.z++;
    return result;
}

inline uint3 operator--(uint3& v, int)
{
    const uint3 result = v;
    v.x--;
    v.y--;
    v.z--;
    return result;
}

inline uint3 operator+(const uint3& a, const uint3& b)
{
    return uint3(a.x + b.x, a.y + b.y, a.z + b.z);
}

inline uint3 operator-(const uint3& a, const uint3& b)
{
    return uint3(a.x - b.x, a.y - b.y, a.z - b.z);
}

inline uint3 operator*(const uint3& a, const uint3& b)
{
    return uint3(a.x * b.x, a.y * b.y, a.z * b.z);
}

inline uint3 operator/(const uint3& a, const uint3& b)
{
    return uint3(a.x / b.x, a.y / b.y, a.z / b.z);
}

inline uint3 operator+(const uint3& a, uint b)
{
    return uint3(a.x + b, a.y + b, a.z + b);
}

inline uint3 operator-(const uint3& a, uint b)
{
    return uint3(a.x - b, a.y - b, a.z - b);
}

inline uint3 operator*(const uint3& a, uint b)
{
    return uint3(a.x * b, a.y * b, a.z * b);
}

inline uint3 operator/(const uint3& a, uint b)
{
    return uint3(a.x / b, a.y / b, a.z / b);
}

inline uint3 operator+(uint a, const uint3& b)
{
    return uint3(a + b.x, a + b.y, a + b.z);
}

inline uint3 operator-(uint a, const uint3& b)
{
    return uint3(a - b.x, a - b.y, a - b.z);
}

inline uint3 operator*(uint a, const uint3& b)
{
    return uint3(a * b.x, a * b.y, a * b.z);
}

inline uint3 operator/(uint a, const uint3& b)
{
    return uint3(a / b.x, a / b.y, a / b.z);
}

inline uint3& operator+=(uint3& a, uint b)
{
    return (a = a + b);
}

inline uint3& operator-=(uint3& a, uint b)
{
    return (a = a - b);
}

inline uint3& operator*=(uint3& a, uint b)
{
    return (a = a * b);
}

inline uint3& operator/=(uint3& a, uint b)
{
    return (a = a / b);
}

inline uint3& operator+=(uint3& a, const uint3& b)
{
    return (a = a + b);
}

inline uint3& operator-=(uint3& a, const uint3& b)
{
    return (a = a - b);
}

inline uint3& operator*=(uint3& a, const uint3& b)
{
    return (a = a * b);
}

inline uint3& operator/=(uint3& a, const uint3& b)
{
    return (a = a / b);
}

inline bool3 operator<(const uint3& a, const uint3& b)
{
    return bool3(a.x < b.x, a.y < b.y, a.z < b.z);
}

inline bool3 operator>(const uint3& a, const uint3& b)
{
    return bool3(a.x > b.x, a.y > b.y, a.z > b.z);
}

inline bool3 operator<=(const uint3& a, const uint3& b)
{
    return bool3(a.x <= b.x, a.y <= b.y, a.z <= b.z);
}

inline bool3 operator>=(const uint3& a, const uint3& b)
{
    return bool3(a.x >= b.x, a.y >= b.y, a.z >= b.z);
}

inline bool3 operator==(const uint3& a, const uint3& b)
{
    return bool3(a.x == b.x, a.y == b.y, a.z == b.z);
}

inline bool3 operator!=(const uint3& a, const uint3& b)
{
    return bool3(a.x != b.x, a.y != b.y, a.z != b.z);
}

//
// @region: Common functions
//

/* Get the smaller value
 */
inline uint3 min(const uint3& a, const uint3& b)
{
    return uint3(min(a[0], b[0]),
                 min(a[1], b[1]),
                 min(a[2], b[2]));
}

/* Get the larger value
 */
inline uint3 max(const uint3& a, const uint3& b)
{
    return uint3(max(a[0], b[0]), 
                 max(a[1], b[1]),
                 max(a[2], b[2]));
}

/* Clamps the 'x' value to the [min, max].
 */
inline uint3 clamp(const uint3& v, const uint3& min, const uint3& max)
{
    return uint3(clamp(v[0], min[0], max[0]), 
                 clamp(v[1], min[1], max[1]), 
                 clamp(v[2], min[2], max[2]));
}

