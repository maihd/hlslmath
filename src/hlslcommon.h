#undef min // When Windows.h is included, min is an macro
#undef max // When Windows.h is included, max is an macro

/* PI number (float)
 */
static const float PI = 3.14159265358979f;

/* Convert radians to degrees (float)
 */
inline float degrees(float x)
{
    const float factor = 180.0f / PI;
    return x * factor;
}

/* Convert degrees to radians (float)
 */
inline float radians(float x)
{
    const float factor = PI / 180.0f;
    return x * factor;
}

/* Convert radians to degrees (double)
 */
inline double degrees(double x)
{
    const double factor = 180.0 / PI;
    return x * factor;
}

/* Convert degrees to radians (double)
 */
inline double radians(double x)
{
    const double factor = PI / 180.0;
    return x * factor;
}
