# HLSL's Math library ![Build Status]

[Build Status]: https://travis-ci.org/maihd/hlslmath.svg?branch=master

**Vector and matrix for based on hlsl language for C++ (only).**

## Build
```
cd tools

# Unix or OS X (require gcc)
gcc -o build build.c
./build --output=<output> --namespace=<namespace>

# Windows (has prebuilt)
build.exe --output=<output> --namespace=<namespace>
```

## Types
1. int    [+]
2. uint   [+]
3. bool   [+]
4. float  [+]
5. double [-]
6. fixed  [-]
7. half   [-]
8. short  [-]
9. long   [-]

## Abstract types
1. Vector 2, 3, 4
2. Matrix 2x2, 3x3, 4x4

## Examples
```C++
...
float3 position;
float3 scalation;
float4 axisAngle;

// Initialize your transform

float4x4 translateMatrix = float4x4::translate(position);
float4x4 scalationMatrix = float4x4::scale(scalation);
float4x4 axisAngleMatrix = float4x4::rotate(axisAngle.axis, axisAngle.angle);

float4x4 modelMatrix = mul(mul(translateMatrix, scalationMatrix), axisAngleMatrix);
float4x4 projectionMatrix = float4x4::perspective(radian(45.0f), WIDTH / HEIGHT, 0.0f, 100.0f);
//float4x4 projectionMatrix = float4x4::ortho(0.0f, WIDTH, 0.0f, HEIGHT, 0.0f, 1.0f);

// Apply matrix to your render pipeline
...
```
    
