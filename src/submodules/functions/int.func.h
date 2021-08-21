/* Compute the sign of 'x'
 */
inline int sign(int x)
{
    return x >> 31;
}

#if HLSLMATH_DEFINE_INTRINSICS != 0
/* Computes absolute value
 */
inline int abs(int x)
{
    const int bits = sizeof(int) * 8 - 1;
    return (x + (x >> bits)) ^ (x >> bits);
}
#endif

/* Get the smaller value
 */
inline int min(int x, int y)
{
    return x < y ? x : y;
}

/* Get the larger value
 */
inline int max(int x, int y)
{
    return x > y ? x : y;
}

/* Clamps the 'x' to the [min, max]
 */
inline int clamp(int x, int min, int max)
{
    return x < min ? min : (x > max ? max : x);
}
