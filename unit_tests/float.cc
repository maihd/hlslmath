#include HLSLMATH_H
#include "./test_framework.h"

int main(void)
{
    test(cos(10.0f) == cosf(10.0f), "test cos failed");
    test(sin(10.0f) == sinf(10.0f), "test sin failed");
    test(tan(10.0f) == tanf(10.0f), "test tan failed");

    return 0;
}