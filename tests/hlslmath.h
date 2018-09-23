#pragma once

#include "../src/define.h"

#if (defined(_MSC_VER) && (_MSC_VER >= 1900)) || __unix__
#define HLSL_DEFINE_INTRINSICS 1
#else
#define HLSL_DEFINE_INTRINSICS 0
#endif

#include <assert.h>
#define HLSL_ASSERT(exp, msg) assert(exp && msg)

#include "../src/int2.type.h"
#include "../src/int3.type.h"
#include "../src/int4.type.h"
#include "../src/uint.type.h"
#include "../src/uint2.type.h"
#include "../src/uint3.type.h"
#include "../src/uint4.type.h"
#include "../src/bool2.type.h"
#include "../src/bool3.type.h"
#include "../src/bool4.type.h"
#include "../src/float2.type.h"
#include "../src/float3.type.h"
#include "../src/float4.type.h"
    
#include "../src/int2x2.type.h"
#include "../src/int3x3.type.h"
#include "../src/int4x4.type.h"
#include "../src/uint2x2.type.h"
#include "../src/uint3x3.type.h"
#include "../src/uint4x4.type.h"
#include "../src/bool2x2.type.h"
#include "../src/bool3x3.type.h"
#include "../src/bool4x4.type.h"
#include "../src/float2x2.type.h"
#include "../src/float3x3.type.h"
#include "../src/float4x4.type.h"

#include "../src/bool.func.h"
#include "../src/conversion.h"

#include "../src/int.func.h"
#include "../src/int2.func.h"
#include "../src/int3.func.h"
#include "../src/int4.func.h"
#include "../src/uint.func.h"  
#include "../src/uint2.func.h"
#include "../src/uint3.func.h"
#include "../src/uint4.func.h"
#include "../src/float.func.h"
#include "../src/float2.func.h"
#include "../src/float3.func.h"
#include "../src/float4.func.h" 

#include "../src/int2x2.func.h"
#include "../src/int3x3.func.h"
#include "../src/int4x4.func.h"      
#include "../src/uint2x2.func.h"
#include "../src/uint3x3.func.h"
#include "../src/uint4x4.func.h"       
#include "../src/float2x2.func.h"
#include "../src/float3x3.func.h"
#include "../src/float4x4.func.h"
