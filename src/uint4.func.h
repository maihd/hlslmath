//
// @region: Operator overloadng
//

inline uint4& operator++(uint4& v)
{
    ++v.x;
    ++v.y;
    ++v.z;
    ++v.w;
    return v;
}

inline uint4& operator--(uint4& v)
{
    --v.x;
    --v.y;
    --v.z;
    --v.w;
    return v;
}

inline uint4 operator++(uint4& v, int)
{
    const uint4 result = v;
    v.x++;
    v.y++;
    v.z++;
    v.w++;
    return result;
}

inline uint4 operator--(uint4& v, int)
{
    const uint4 result = v;
    v.x--;
    v.y--;
    v.z--;
    v.w--;
    return result;
}

inline uint4 operator+(const uint4& a, const uint4& b)
{
    return uint4(a.x + b.x, a.y + b.y, a.z + b.z, a.w / b.w);
}

inline uint4 operator-(const uint4& a, const uint4& b)
{
    return uint4(a.x - b.x, a.y - b.y, a.z - b.z, a.w / b.w);
}

inline uint4 operator*(const uint4& a, const uint4& b)
{
    return uint4(a.x * b.x, a.y * b.y, a.z * b.z, a.w / b.w);
}

inline uint4 operator/(const uint4& a, const uint4& b)
{
    return uint4(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
}

inline uint4 operator+(const uint4& a, uint b)
{
    return uint4(a.x + b, a.y + b, a.z + b, a.w + b);
}

inline uint4 operator-(const uint4& a, uint b)
{
    return uint4(a.x - b, a.y - b, a.z - b, a.w - b);
}

inline uint4 operator*(const uint4& a, uint b)
{
    return uint4(a.x * b, a.y * b, a.z * b, a.w * b);
}

inline uint4 operator/(const uint4& a, uint b)
{
    return uint4(a.x / b, a.y / b, a.z / b, a.w / b);
}

inline uint4 operator+(uint a, const uint4& b)
{
    return uint4(a + b.x, a + b.y, a + b.z, a + b.w);
}

inline uint4 operator-(uint a, const uint4& b)
{
    return uint4(a - b.x, a - b.y, a - b.z, a - b.w);
}

inline uint4 operator*(uint a, const uint4& b)
{
    return uint4(a * b.x, a * b.y, a * b.z, a * b.w);
}

inline uint4 operator/(uint a, const uint4& b)
{
    return uint4(a / b.x, a / b.y, a / b.z, a / b.w);
}

inline uint4& operator+=(uint4& a, uint b)
{
    return (a = a + b);
}

inline uint4& operator-=(uint4& a, uint b)
{
    return (a = a - b);
}

inline uint4& operator*=(uint4& a, uint b)
{
    return (a = a * b);
}

inline uint4& operator/=(uint4& a, uint b)
{
    return (a = a / b);
}

inline uint4& operator+=(uint4& a, const uint4& b)
{
    return (a = a + b);
}

inline uint4& operator-=(uint4& a, const uint4& b)
{
    return (a = a - b);
}

inline uint4& operator*=(uint4& a, const uint4& b)
{
    return (a = a * b);
}

inline uint4& operator/=(uint4& a, const uint4& b)
{
    return (a = a / b);
}

inline bool4 operator<(const uint4& a, const uint4& b)
{
    return bool4(a.x < b.x, a.y < b.y, a.z < b.z, a.w < b.w);
}

inline bool4 operator>(const uint4& a, const uint4& b)
{
    return bool4(a.x > b.x, a.y > b.y, a.z > b.z, a.w > b.w);
}

inline bool4 operator<=(const uint4& a, const uint4& b)
{
    return bool4(a.x <= b.x, a.y <= b.y, a.z <= b.z, a.w <= b.w);
}

inline bool4 operator>=(const uint4& a, const uint4& b)
{
    return bool4(a.x >= b.x, a.y >= b.y, a.z >= b.z, a.w >= b.w);
}

inline bool4 operator==(const uint4& a, const uint4& b)
{
    return bool4(a.x == b.x, a.y == b.y, a.z == b.z, a.w == b.w);
}

inline bool4 operator!=(const uint4& a, const uint4& b)
{
    return bool4(a.x != b.x, a.y != b.y, a.z != b.z, a.w != b.w);
}

//
// @region: Common functions
//

/* Get the smaller value
 */
inline uint4 min(const uint4& a, const uint4& b)
{
    return uint4(min(a[0], b[0]),
                 min(a[1], b[1]),
                 min(a[2], b[2]),
                 min(a[3], b[3]));
}

/* Get the larger value
 */
inline uint4 max(const uint4& a, const uint4& b)
{
    return uint4(max(a[0], b[0]), 
                 max(a[1], b[1]),
                 max(a[2], b[2]),
                 max(a[3], b[3]));
}

/* Clamps the 'x' value to the [min, max].
 */
inline uint4 clamp(const uint4& v, const uint4& min, const uint4& max)
{
    return uint4(clamp(v[0], min[0], max[0]), 
                 clamp(v[1], min[1], max[1]), 
                 clamp(v[2], min[2], max[2]), 
                 clamp(v[3], min[3], max[3]));
}
