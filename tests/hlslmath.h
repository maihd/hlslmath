#pragma once

#include "../src/define.cc"

#if (defined(_MSC_VER) && (_MSC_VER >= 1900)) || __unix__
#define HLSL_DEFINE_INTRINSICS 1
#else
#define HLSL_DEFINE_INTRINSICS 0
#endif

#include <assert.h>
#define HLSL_ASSERT(exp, msg) assert(exp && msg)

#include "../src/int2.type.cc"
#include "../src/int3.type.cc"
#include "../src/int4.type.cc"
#include "../src/uint.type.cc"
#include "../src/uint2.type.cc"
#include "../src/uint3.type.cc"
#include "../src/uint4.type.cc"
#include "../src/bool2.type.cc"
#include "../src/bool3.type.cc"
#include "../src/bool4.type.cc"
#include "../src/float2.type.cc"
#include "../src/float3.type.cc"
#include "../src/float4.type.cc"
    
#include "../src/int2x2.type.cc"
#include "../src/int3x3.type.cc"
#include "../src/int4x4.type.cc"
#include "../src/uint2x2.type.cc"
#include "../src/uint3x3.type.cc"
#include "../src/uint4x4.type.cc"
#include "../src/bool2x2.type.cc"
#include "../src/bool3x3.type.cc"
#include "../src/bool4x4.type.cc"
#include "../src/float2x2.type.cc"
#include "../src/float3x3.type.cc"
#include "../src/float4x4.type.cc"

#include "../src/bool.func.cc"
#include "../src/conversion.cc"

#include "../src/int.func.cc"
#include "../src/int2.func.cc"
#include "../src/int3.func.cc"
#include "../src/int4.func.cc"
#include "../src/uint.func.cc"  
#include "../src/uint2.func.cc"
#include "../src/uint3.func.cc"
#include "../src/uint4.func.cc"
#include "../src/float.func.cc"
#include "../src/float2.func.cc"
#include "../src/float3.func.cc"
#include "../src/float4.func.cc" 

#include "../src/int2x2.func.cc"
#include "../src/int3x3.func.cc"
#include "../src/int4x4.func.cc"      
#include "../src/uint2x2.func.cc"
#include "../src/uint3x3.func.cc"
#include "../src/uint4x4.func.cc"       
#include "../src/float2x2.func.cc"
#include "../src/float3x3.func.cc"
#include "../src/float4x4.func.cc"
