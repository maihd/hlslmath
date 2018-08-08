// hlslmath_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <time.h>
#include <stdlib.h>
#include <stdarg.h>
#include <emmintrin.h>

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

void float2_test(float2* out = nullptr)
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

void memcpy_simd(void* dst, void* src, size_t size)
{
    char* dst_byte = (char*)dst;
    char* src_byte = (char*)src;

    int n = size;
    switch (size % 16)
    {
    case 15: *dst_byte++ = *src_byte++; n--;
    case 14: *dst_byte++ = *src_byte++; n--;
    case 13: *dst_byte++ = *src_byte++; n--;
    case 12: *dst_byte++ = *src_byte++; n--;
    case 11: *dst_byte++ = *src_byte++; n--;
    case 10: *dst_byte++ = *src_byte++; n--;
    case  9: *dst_byte++ = *src_byte++; n--;
    case  8: *dst_byte++ = *src_byte++; n--;
    case  7: *dst_byte++ = *src_byte++; n--;
    case  6: *dst_byte++ = *src_byte++; n--;
    case  5: *dst_byte++ = *src_byte++; n--;
    case  4: *dst_byte++ = *src_byte++; n--;
    case  3: *dst_byte++ = *src_byte++; n--;
    case  2: *dst_byte++ = *src_byte++; n--;
    case  1: *dst_byte++ = *src_byte++; n--;
    }

    __m128* dst_simd = (__m128*)dst_byte;
    __m128* src_simd = (__m128*)src_byte;

    size_t dst_addr = (size_t)dst_byte;
    size_t src_addr = (size_t)src_byte;

    size_t align = alignof(__m128);
    size_t dst_misalign = dst_addr & (align - 1);
    size_t src_misalign = src_addr & (align - 1);
    if (dst_misalign > 0 || src_misalign > 0)
    {
        size_t dst_adjustment = align - dst_misalign;
        size_t src_adjustment = align - src_misalign;

        size_t new_size = size - max(src_adjustment, dst_adjustment);
        size_t head = min(src_adjustment, dst_adjustment);

        memcpy(dst_byte, src_byte, head);

        if (src_adjustment != dst_adjustment)
        {
            size_t tail = (size_t)abs((long)(src_adjustment - dst_adjustment));

            memcpy(dst_byte + n - tail, src_byte + n - tail, tail);
        }

        n -= 16;
        dst_simd = (__m128*)dst_byte + dst_adjustment;
        src_simd = (__m128*)src_byte + src_adjustment;
    }

    n = n / 16;
    switch (n % 8)
    {
    case 0: do { *dst_simd++ = *src_simd++; n--;
    case 7:      *dst_simd++ = *src_simd++; n--;
    case 6:      *dst_simd++ = *src_simd++; n--;
    case 5:      *dst_simd++ = *src_simd++; n--;
    case 4:      *dst_simd++ = *src_simd++; n--;
    case 3:      *dst_simd++ = *src_simd++; n--;
    case 2:      *dst_simd++ = *src_simd++; n--;
    case 1:      *dst_simd++ = *src_simd++; n--;
               } while (n > 0);
    }
}

struct simd4f
{
public: 
    inline simd4f(__m128 data) : data(data) {};
    inline simd4f(float x, float y, float z, float w) : data(_mm_set_ps(w, z, y, x)) {}

public:
    inline float& operator[](int index)
    {
        return data.m128_f32[index];
    }

private:
    __m128 data;
};

int main()
{
    const int size = 512 * 1024 * 1024;
    void* dst = malloc(size);
    void* src = malloc(size);

    clock_t start;
    clock_t delta;

    start = clock();
    memcpy(dst, src, size);
    delta = clock() - start;
    printf("Function: memcpy - total time: %ld\n", delta);

    start = clock();
    memcpy_simd(dst, src, size);
    delta = clock() - start;
    printf("Function: memcpy_simd - total time: %ld\n", delta);

    simd4f temp = simd4f(1, 2, 3, 4);
    printf("Temp: %f %f %f %f\n", temp[0], temp[1], temp[2], temp[3]);

    //setvbuf(stdout, nullptr, _IONBF, 0);

    //float2_test();
    //float3_test();
    //float4_test();

    getchar();
    return 0;
}

