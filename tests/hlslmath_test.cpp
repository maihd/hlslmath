// hlslmath_test.cpp : Defines the entry point for the console application.
//

#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <emmintrin.h>

#include "../unit_tests/hlslmath.h"

#define test_operator(expect, operation)     test(expect, operation, "Testing operator: '" #operation "'")
#define test_function(expect, function, ...) test(expect, function(##__VA_AGRS__), "Testing function: " #function)

template <typename T, typename U>
void test(const T& expect, const U& result, const char* fmt, ...)
{
    va_list varg;
    va_start(varg, fmt);
    vfprintf(stdout, fmt, varg);
    va_end(varg);

    if (!all(result == expect))
    {
        fprintf(stderr, " - Failed.");
        getchar();
        exit(1);
    }
    else
    {
        fprintf(stderr, " - Success.");
    }
    fputs("\n", stdout);
}

void float2_test(float2* out = NULL)
{
    float2 a = float2(1, 2);
    float2 b = float2(3, 4);

    long i = 10 * 1000 * 1000 * 10;
    clock_t start = clock();
    //while (i-- > 0)
    {
        //a + b;
        //a - b;
        //a * b;
        //a / b;
        //test_operator(float2(     4,      6), a + b);
        //test_operator(float2(    -2,     -2), a - b);
        //test_operator(float2(     3,      8), a * b);
        //test_operator(float2(1/3.0f, 2/4.0f), a / b);
    }
    clock_t delta = clock() - start;

    printf("Total time: %ld\n", delta);
}

void float3_test()
{
    float3 a = float3(1, 2, 3);
    float3 b = float3(4, 5, 6);
    
    int i = 10 * 1000;
    clock_t start = clock();
    //while (i-- > 0)
    {
        //test_operator(float3(     5,      7,  9), a + b);
        //test_operator(float3(    -3,     -3, -3), a - b);
        //test_operator(float3(     4,     10, 18), a * b);
        //test_operator(float3(1/4.0f, 2/5.0f, 3/6.0f), a / b);
    }
    clock_t delta = clock() - start;

    //printf("Total time: %ld\n", delta);
}

void float4_test()
{
    float4 a = float4(1, 2, 3, 4);
    float4 b = float4(5, 6, 7, 8);

    long i = 10 * 1000;
    clock_t start = clock();
    while (i-- > 0)
    {
        //a + b;
        //a - b;
        //a * b;
        //a / b;
        test_operator(float4(     6,      8,  10, 12), a + b);
        test_operator(float4(    -4,     -4,  -4, -4), a - b);
        test_operator(float4(     5,     12,  21, 32), a * b);
        test_operator(float4(1/5.0f, 2/6.0f,  3/7.0f, 4/8.0f), a / b);
    }
    clock_t delta = clock() - start;

    printf("Total time: %ld\n", delta);
}

int main()
{
    //setvbuf(stdout, nullptr, _IONBF, 0);

    //float2_test();
    //float3_test();
    //float4_test();

    int i = -10;
    i = abs(i);

    i = -20;
    i = abs(i);

    i = 20;
    i = abs(i);

    getchar();
    return 0;
}

