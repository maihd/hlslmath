/* Computes sign of 'x'
 */
HLSLMATH_INLINE int2 sign(const int2& m)
{
    return int2(sign(m[0]),
                sign(m[1]));
}

/* Computes absolute value
 */
HLSLMATH_INLINE int2 abs(const int2& m)
{
    return int2(abs(m[0]),
                abs(m[1]));
}

/* Get the smaller value
 */
HLSLMATH_INLINE int2 min(const int2& a, const int2& b)
{
    return int2(min(a[0], b[0]),
                min(a[1], b[1]));
}

/* Get the larger value
 */
HLSLMATH_INLINE int2 max(const int2& a, const int2& b)
{
    return int2(max(a[0], b[0]), 
                max(a[1], b[1]));
}

/* Clamps the 'x' value to the [min, max].
 */
HLSLMATH_INLINE int2 clamp(const int2& m, const int2& min, const int2& max)
{
    return int2(clamp(m[0], min[0], max[0]), 
                clamp(m[1], min[1], max[1]));
}
