/* Get the smaller value
 */
HLSLMATH_INLINE uint min(uint x, uint y)
{
    return x < y ? x : y;
}

/* Get the larger value
 */
HLSLMATH_INLINE uint max(uint x, uint y)
{
    return x > y ? x : y;
}

/* Clamps the 'x' to the [min, max]
 */
HLSLMATH_INLINE uint clamp(uint x, uint min, uint max)
{
    return x < min ? min : (x > max ? max : x);
}
