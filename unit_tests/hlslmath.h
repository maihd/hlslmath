#pragma once

#include "../src/module_begin.h"

#if (defined(_MSC_VER) && (_MSC_VER >= 1900)) || __unix__
#define HLSL_DEFINE_INTRINSICS 1
#else
#define HLSL_DEFINE_INTRINSICS 0
#endif

#include <assert.h>
#define HLSL_ASSERT(exp, msg) assert(exp && msg)

#include "../src/submodules/int2.type.h"
#include "../src/submodules/int3.type.h"
#include "../src/submodules/int4.type.h"
#include "../src/submodules/uint.type.h"
#include "../src/submodules/uint2.type.h"
#include "../src/submodules/uint3.type.h"
#include "../src/submodules/uint4.type.h"
#include "../src/submodules/bool2.type.h"
#include "../src/submodules/bool3.type.h"
#include "../src/submodules/bool4.type.h"
#include "../src/submodules/float2.type.h"
#include "../src/submodules/float3.type.h"
#include "../src/submodules/float4.type.h"
    
#include "../src/submodules/int2x2.type.h"
#include "../src/submodules/int3x3.type.h"
#include "../src/submodules/int4x4.type.h"
#include "../src/submodules/uint2x2.type.h"
#include "../src/submodules/uint3x3.type.h"
#include "../src/submodules/uint4x4.type.h"
#include "../src/submodules/bool2x2.type.h"
#include "../src/submodules/bool3x3.type.h"
#include "../src/submodules/bool4x4.type.h"
#include "../src/submodules/float2x2.type.h"
#include "../src/submodules/float3x3.type.h"
#include "../src/submodules/float4x4.type.h"

#include "../src/submodules/bool.func.h"
#include "../src/submodules/conversion.h"

#include "../src/submodules/int.func.h"
#include "../src/submodules/int2.func.h"
#include "../src/submodules/int3.func.h"
#include "../src/submodules/int4.func.h"
#include "../src/submodules/uint.func.h"  
#include "../src/submodules/uint2.func.h"
#include "../src/submodules/uint3.func.h"
#include "../src/submodules/uint4.func.h"
#include "../src/submodules/float.func.h"
#include "../src/submodules/float2.func.h"
#include "../src/submodules/float3.func.h"
#include "../src/submodules/float4.func.h" 

#include "../src/submodules/int2x2.func.h"
#include "../src/submodules/int3x3.func.h"
#include "../src/submodules/int4x4.func.h"      
#include "../src/submodules/uint2x2.func.h"
#include "../src/submodules/uint3x3.func.h"
#include "../src/submodules/uint4x4.func.h"       
#include "../src/submodules/float2x2.func.h"
#include "../src/submodules/float3x3.func.h"
#include "../src/submodules/float4x4.func.h"

#include "../src/module_begin.h"
