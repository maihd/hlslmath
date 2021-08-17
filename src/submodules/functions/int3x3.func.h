/* Computes sign of 'x'
 */
HLSLMATH_INLINE int3x3 sign(const int3x3& m)
{
    return int3x3(sign(m[0]),
                  sign(m[1]),
                  sign(m[2]));
}

/* Computes absolute value
 */
HLSLMATH_INLINE int3x3 abs(const int3x3& m)
{
    return int3x3(abs(m[0]),
                  abs(m[1]),
                  abs(m[2]));
}

/* Get the smaller value
 */
HLSLMATH_INLINE int3x3 min(const int3x3& a, const int3x3& b)
{
    return int3x3(min(a[0], b[0]),
                  min(a[1], b[1]),
                  min(a[2], b[2]));
}

/* Get the larger value
 */
HLSLMATH_INLINE int3x3 max(const int3x3& a, const int3x3& b)
{
    return int3x3(max(a[0], b[0]), 
                  max(a[1], b[1]),
                  max(a[2], b[2]));
}

/* Clamps the 'x' value to the [min, max].
 */
HLSLMATH_INLINE int3x3 clamp(const int3x3& v, const int3x3& min, const int3x3& max)
{
    return int3x3(clamp(v[0], min[0], max[0]), 
                  clamp(v[1], min[1], max[1]), 
                  clamp(v[2], min[2], max[2]));
}
