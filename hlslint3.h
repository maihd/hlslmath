#pragma once

#include "hlsltypes.h"

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

inline const int3& operator++(int3& v, int)
{
    v.x++;
    v.y++;
    v.z++;
    return v;
}

inline const int3& operator--(int3& v, int)
{
    v.x--;
    v.y--;
    v.z--;
    return v;
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
