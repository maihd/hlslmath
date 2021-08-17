/* Get the smaller value
 */
HLSLMATH_INLINE uint2x2 min(const uint2x2& a, const uint2x2& b)
{
    return uint2x2(min(a[0], b[0]),
                   min(a[1], b[1]));
}

/* Get the larger value
 */
HLSLMATH_INLINE uint2x2 max(const uint2x2& a, const uint2x2& b)
{
    return uint2x2(max(a[0], b[0]), 
                   max(a[1], b[1]));
}

/* Clamps the 'x' value to the [min, max].
 */
HLSLMATH_INLINE uint2x2 clamp(const uint2x2& m, const uint2x2& min, const uint2x2& max)
{
    return uint2x2(clamp(m[0], min[0], max[0]), 
                   clamp(m[1], min[1], max[1]));
}
