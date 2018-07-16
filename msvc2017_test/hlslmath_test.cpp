// hlslmath_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdarg.h>
#include "../hlslmath.h"

bool all(bool a)
{
    return a;
}

bool all(bool2 v)
{
    return v.x && v.y;
}

bool all(bool3 v)
{
    return v.x && v.y && v.z;
}

bool all(bool4 v)
{
    return v.x && v.y && v.z && v.w;
}

#define test_operator(expect, operation)     test(expect, operation, "Testing operator: '" #operation "'")
#define test_function(expect, function, ...) test(expect, function(##__VA_AGRS__), "Testing function: " #function)

template <typename T>
void test(const T& expect, const T& result, const char* fmt, ...)
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

void float2_test()
{
    float2 a = float2(1, 2);
    float2 b = float2(3, 4);
    
    test_operator(float2(     4,      6), a + b);
    test_operator(float2(    -2,     -2), a - b);
    test_operator(float2(     3,      8), a * b);
    test_operator(float2(1/3.0f, 2/4.0f), a / b);
}

int main()
{
    float2_test();

    getchar();
    return 0;
}

