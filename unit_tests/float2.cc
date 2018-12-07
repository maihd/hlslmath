#include "./hlslmath.h"
#include "./test_framework.h"

int main(int argc, char* argv[])
{
    float2 a = float2(0);
    float2 b = float2(0);

    test(all(a == b), "a should equal to b");

    return 0;
}