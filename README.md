# HLSL's Math library ![Build Status](https://github.com/maihd/hlslmath/actions/workflows/unit-tests.yml/badge.svg) [![License: Unlicense](https://img.shields.io/badge/license-Unlicense-blue.svg)](http://unlicense.org/)

**Vectors and matrices for based on HLSL language for C++.**
    
## License
This library is unlicensed.

## Build
```
cd tools

# Unix or OS X (require gcc)
make
./build --output=<output> --namespace=<namespace>

# Windows (has prebuilt)
# `make` if you build new executor
build.exe --output=<output> --namespace=<namespace>
```

## Scalar types
* [x] int
* [x] uint
* [x] bool
* [x] float
* [ ] double
* [ ] fixed
* [ ] half
* [ ] short
* [ ] ushort
* [ ] long
* [ ] ulong

## Template types
* [x] Vector 2, 3, 4 (float, int, uint, bool)
* [x] Matrix 2x2, 3x3, 4x4 (float, int, uint, bool)
* [ ] Matrix 2x3, 2x4
* [ ] Matrix 3x2, 3x4
* [ ] Matrix 4x2, 4x3
* [x] Quaternion: present as float4, qmul, qinverse, qconj, qeuler

## Examples
```C++
...
float3 position;
float3 scalation;
float3 axis;
float  angle;

// Initialize your transform with deprecated API
//  - Have some issues to implements
//  - More cleaner for some guys are familiar with '::'
//  - Will be remove because data & code should be seperate from the API, you can use your own code on float4x4 (or any type) if you know that give better result

float4x4 translateMatrix = float4x4::translate(position);
float4x4 scalationMatrix = float4x4::scale(scalation);
float4x4 axisAngleMatrix = float4x4::rotate(axis, angle);

float4x4 modelMatrix = mul(mul(translateMatrix, scalationMatrix), axisAngleMatrix);
float4x4 projectionMatrix = float4x4::perspective(radian(45.0f), WIDTH / HEIGHT, 0.0f, 100.0f);
float4x4 projectionMatrix2DOrIsometric = float4x4::ortho(0.0f, WIDTH, 0.0f, HEIGHT, 0.0f, 1.0f);

// Initialize your transform with new API
//  - Data and code seperates
//  - Easier to add extensions
//  - Prefix with type name, familiar to OpenGL, Vulkan guys

float4x4 positionMatrix = float4x4Translation(position);
float4x4 scalationMatrix = float4x4Scalation(scalation);

float4x4 xAxisRotationMatrix = float4x4RotationX(angle);
float4x4 yAxisRotationMatrix = float4x4RotationY(angle);
float4x4 zAxisRotationMatrix = float4x4RotationZ(angle);
float4x4 eulerRotationMatrix = float4x4Rotation(euler);
float4x4 quaternionRotationMatrix = float4x4Rotation(quaterion);
float4x4 axisAngleRotationMatrix = float4x4Rotation(axis, angle);

float4x4 modelMatrix = mul(mul(translateMatrix, scalationMatrix), axisAngleMatrix);
float4x4 projectionMatrix = float4x4Perspective(radian(45.0f), WIDTH / HEIGHT, 0.0f, 100.0f);
float4x4 projectionMatrix2DOrIsometric = float4x4Ortho(0.0f, WIDTH, 0.0f, HEIGHT, 0.0f, 1.0f);

// Apply matrix to your render pipeline
...
```

## Documentation
Work in progress.

## Further reading
- [HLSL data types](https://docs.microsoft.com/en-us/windows/win32/direct3dhlsl/dx-graphics-hlsl-data-types)
- [HLSL Math functions (intrinsics)](https://docs.microsoft.com/en-us/windows/win32/direct3dhlsl/dx-graphics-hlsl-intrinsic-functions)
- [Operator overloading FQA](https://yosefk.com/c++fqa/operator.html)
- [TDD and Math library](https://gamesfromwithin.com/when-is-it-ok-not-to-tdd)
> On the other hand, I would argue that using TDD on a math library is a bad idea. It’s essential to write good unit tests for a math library, but probably not to design it through TDD. Are you really going to implement a cross product differently just because you wrote tests before? The emphasis there has to be on correctness and performance, not on creating the interface or implementation through tests.<br/>
> => Write unit tests, benchmarks after design the API
- [Sony's open sourced VectorMath library overview](https://github.com/glampert/vectormath/blob/master/docs/VectorMath-Library-Overview.pdf)
> Features<br/>
>   The Vector Math library mainly provides functions used in 3-D graphics for 3-D and 4-D vector operations, matrix operations, and quaternion operations. APIs for both the C and C++ programming languages are provided, along with three formats according to the data layout:<br/>
>       - The AoS (Array of Structures) SIMD format, which can easily and quickly be adapted to handle different situations<br/>
>       - The SoA (Structure of Arrays) SIMD format, which allows for maximum throughput<br/>
>       - The scalar format, which is useful for porting and testing<br/>
>   All three formats provide implementations for the PPU and SPU.