#include "../test_framework.h"

DEFINE_UNIT_TEST("Working with float2")
{
    float2 a = float2(0, 0);
    float2 b = float2(0, 0);

    TEST(all(a == b), "a should equal to b");
    TEST(!any(a != b), "a should equal to b");

    TEST(all(a + b == float2(0, 0)), "a + b should equal to zero");

    TEST(length(a) == 0, "length of a is not true");
}