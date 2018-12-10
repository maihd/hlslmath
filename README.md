# HLSL's Math library ![Build Status](https://travis-ci.org/maihd/hlslmath.svg?branch=master)

**Vectors and matrices for based on HLSL language for C++.**
    
## License
This library is in the public domain.

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
* [ ] long   

## Template types
1. Vector 2, 3, 4
2. Matrix 2x2, 3x3, 4x4

## Examples
```C++
...
float3 position;
float3 scalation;
float3 axis;
float  angle;

// Initialize your transform

float4x4 translateMatrix = float4x4::translate(position);
float4x4 scalationMatrix = float4x4::scale(scalation);
float4x4 axisAngleMatrix = float4x4::rotate(axis, angle);

float4x4 modelMatrix = mul(mul(translateMatrix, scalationMatrix), axisAngleMatrix);
float4x4 projectionMatrix = float4x4::perspective(radian(45.0f), WIDTH / HEIGHT, 0.0f, 100.0f);
//float4x4 projectionMatrix = float4x4::ortho(0.0f, WIDTH, 0.0f, HEIGHT, 0.0f, 1.0f);

// Apply matrix to your render pipeline
...
```

## Documentation
Work in progress.