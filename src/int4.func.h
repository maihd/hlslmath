//
// @region: Operator overloadng
//

inline int4 operator-(const int4& v)
{
    return int4(-v.x, -v.y, -v.z, -v.w);
}

inline int4& operator++(int4& v)
{
    ++v.x;
    ++v.y;
    ++v.z;
    ++v.w;
    return v;
}

inline int4& operator--(int4& v)
{
    --v.x;
    --v.y;
    --v.z;
    --v.w;
    return v;
}

inline int4 operator++(int4& v, int)
{
    const int4 result = v;
    v.x++;
    v.y++;
    v.z++;
    v.w++;
    return result;
}

inline int4 operator--(int4& v, int)
{
    const int4 result = v;
    v.x--;
    v.y--;
    v.z--;
    v.w--;
    return result;
}

inline int4 operator+(const int4& a, const int4& b)
{
    return int4(a.x + b.x, a.y + b.y, a.z + b.z, a.w / b.w);
}

inline int4 operator-(const int4& a, const int4& b)
{
    return int4(a.x - b.x, a.y - b.y, a.z - b.z, a.w / b.w);
}

inline int4 operator*(const int4& a, const int4& b)
{
    return int4(a.x * b.x, a.y * b.y, a.z * b.z, a.w / b.w);
}

inline int4 operator/(const int4& a, const int4& b)
{
    return int4(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
}

inline int4 operator+(const int4& a, int b)
{
    return int4(a.x + b, a.y + b, a.z + b, a.w + b);
}

inline int4 operator-(const int4& a, int b)
{
    return int4(a.x - b, a.y - b, a.z - b, a.w - b);
}

inline int4 operator*(const int4& a, int b)
{
    return int4(a.x * b, a.y * b, a.z * b, a.w * b);
}

inline int4 operator/(const int4& a, int b)
{
    return int4(a.x / b, a.y / b, a.z / b, a.w / b);
}

inline int4 operator+(int a, const int4& b)
{
    return int4(a + b.x, a + b.y, a + b.z, a + b.w);
}

inline int4 operator-(int a, const int4& b)
{
    return int4(a - b.x, a - b.y, a - b.z, a - b.w);
}

inline int4 operator*(int a, const int4& b)
{
    return int4(a * b.x, a * b.y, a * b.z, a * b.w);
}

inline int4 operator/(int a, const int4& b)
{
    return int4(a / b.x, a / b.y, a / b.z, a / b.w);
}

inline int4& operator+=(int4& a, int b)
{
    return (a = a + b);
}

inline int4& operator-=(int4& a, int b)
{
    return (a = a - b);
}

inline int4& operator*=(int4& a, int b)
{
    return (a = a * b);
}

inline int4& operator/=(int4& a, int b)
{
    return (a = a / b);
}

inline int4& operator+=(int4& a, const int4& b)
{
    return (a = a + b);
}

inline int4& operator-=(int4& a, const int4& b)
{
    return (a = a - b);
}

inline int4& operator*=(int4& a, const int4& b)
{
    return (a = a * b);
}

inline int4& operator/=(int4& a, const int4& b)
{
    return (a = a / b);
}

inline bool4 operator<(const int4& a, const int4& b)
{
    return bool4(a.x < b.x, a.y < b.y, a.z < b.z, a.w < b.w);
}

inline bool4 operator>(const int4& a, const int4& b)
{
    return bool4(a.x > b.x, a.y > b.y, a.z > b.z, a.w > b.w);
}

inline bool4 operator<=(const int4& a, const int4& b)
{
    return bool4(a.x <= b.x, a.y <= b.y, a.z <= b.z, a.w <= b.w);
}

inline bool4 operator>=(const int4& a, const int4& b)
{
    return bool4(a.x >= b.x, a.y >= b.y, a.z >= b.z, a.w >= b.w);
}

inline bool4 operator==(const int4& a, const int4& b)
{
    return bool4(a.x == b.x, a.y == b.y, a.z == b.z, a.w == b.w);
}

inline bool4 operator!=(const int4& a, const int4& b)
{
    return bool4(a.x != b.x, a.y != b.y, a.z != b.z, a.w != b.w);
}

//
// @region: Common functions
//

/* Computes sign of 'x'
 */
inline int4 sign(const int4& m)
{
    return int4(sign(m[0]),
                sign(m[1]),
                sign(m[2]),
                sign(m[3]));
}

/* Computes absolute value
 */
inline int4 abs(const int4& m)
{
    return int4(abs(m[0]),
                abs(m[1]),
                abs(m[2]),
                abs(m[3]));
}

/* Get the smaller value
 */
inline int4 min(const int4& a, const int4& b)
{
    return int4(min(a[0], b[0]),
                min(a[1], b[1]),
                min(a[2], b[2]),
                min(a[3], b[3]));
}

/* Get the larger value
 */
inline int4 max(const int4& a, const int4& b)
{
    return int4(max(a[0], b[0]), 
                max(a[1], b[1]),
                max(a[2], b[2]),
                max(a[3], b[3]));
}

/* Clamps the 'x' value to the [min, max].
 */
inline int4 clamp(const int4& v, const int4& min, const int4& max)
{
    return int4(clamp(v[0], min[0], max[0]), 
                clamp(v[1], min[1], max[1]), 
                clamp(v[2], min[2], max[2]), 
                clamp(v[3], min[3], max[3]));
}
