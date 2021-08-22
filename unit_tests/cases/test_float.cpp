#include "../test_framework.h"

DEFINE_UNIT_TEST("Working with float")
{
    TEST(cos(10.0f) == cosf(10.0f), "test cos failed");
    TEST(sin(10.0f) == sinf(10.0f), "test sin failed");
    TEST(tan(10.0f) == tanf(10.0f), "test tan failed");
}