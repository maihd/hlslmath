# HLSL's Math library
Vector and matrix for based on hlsl language for C++ (only).

## Examples
```C++
#include YOUR_C_MATH_LIB // <math.H>
namespace your_namespace
{
#include PATH_TO_HLSLMATH_H

    void render(void)
    {
        float3 position;
        float3 scalation;
        float4 axisAngle;

        ...Initialize your transform...

        float4x4 translateMatrix = float4x4::translate(position);
        float4x4 scalationMatrix = float4x4::scale(scalation);
        float4x4 axisAngleMatrix = float4x4::rotate(axisAngle.axis, axisAngle.angle);

        float4x4 modelMatrix = mul(mul(translateMatrix, scalationMatrix), axisAngleMatrix);
        float4x4 projectionMatrix = float4x4::perspective(radian(45.0f), WIDTH / HEIGHT, 0.0f, 100.0f);
        //float4x4 projectionMatrix = float4x4::ortho(0.0f, WIDTH, 0.0f, HEIGHT, 0.0f, 1.0f);

        ...Apply matrix to your render pipeline...
    }
}
```