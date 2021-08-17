#include HLSLMATH_H
#include "./test_framework.h"

int main(int argc, char* argv[])
{
    float2 a = float2(0, 0);
    float2 b = float2(0, 0);

    test(all(a == b), "a should equal to b");
    test(!any(a != b), "a should equal to b");

    test(all(a + b == float2(0, 0)), "a + b should equal to zero");

    test(length(a) == 0, "length of a is not true");

    return 0;
}