#pragma once

#include "../src/module_begin.h"

#if (defined(_MSC_VER) && (_MSC_VER >= 1900))
#define HLSLMATH_DEFINE_INTRINSICS 1
#else
#define HLSLMATH_DEFINE_INTRINSICS 0
#endif

#include <assert.h>
#define HLSLMATH_ASSERT(exp, msg) assert((exp) && msg)

#include "../src/submodules/types/int2.type.h"
#include "../src/submodules/types/int3.type.h"
#include "../src/submodules/types/int4.type.h"
#include "../src/submodules/types/uint2.type.h"
#include "../src/submodules/types/uint3.type.h"
#include "../src/submodules/types/uint4.type.h"
#include "../src/submodules/types/bool2.type.h"
#include "../src/submodules/types/bool3.type.h"
#include "../src/submodules/types/bool4.type.h"
#include "../src/submodules/types/float2.type.h"
#include "../src/submodules/types/float3.type.h"
#include "../src/submodules/types/float4.type.h"
    
#include "../src/submodules/types/int2x2.type.h"
#include "../src/submodules/types/int3x3.type.h"
#include "../src/submodules/types/int4x4.type.h"
#include "../src/submodules/types/uint2x2.type.h"
#include "../src/submodules/types/uint3x3.type.h"
#include "../src/submodules/types/uint4x4.type.h"
#include "../src/submodules/types/bool2x2.type.h"
#include "../src/submodules/types/bool3x3.type.h"
#include "../src/submodules/types/bool4x4.type.h"
#include "../src/submodules/types/float2x2.type.h"
#include "../src/submodules/types/float3x3.type.h"
#include "../src/submodules/types/float4x4.type.h"

#include "../src/submodules/constructors/int2.constructors.h"
#include "../src/submodules/constructors/int3.constructors.h"
#include "../src/submodules/constructors/int4.constructors.h"
#include "../src/submodules/constructors/uint2.constructors.h"
#include "../src/submodules/constructors/uint3.constructors.h"
#include "../src/submodules/constructors/uint4.constructors.h"
#include "../src/submodules/constructors/bool2.constructors.h"
#include "../src/submodules/constructors/bool3.constructors.h"
#include "../src/submodules/constructors/bool4.constructors.h"
#include "../src/submodules/constructors/float2.constructors.h"
#include "../src/submodules/constructors/float3.constructors.h"
#include "../src/submodules/constructors/float4.constructors.h"
    
#include "../src/submodules/constructors/int2x2.constructors.h"
#include "../src/submodules/constructors/int3x3.constructors.h"
#include "../src/submodules/constructors/int4x4.constructors.h"
#include "../src/submodules/constructors/uint2x2.constructors.h"
#include "../src/submodules/constructors/uint3x3.constructors.h"
#include "../src/submodules/constructors/uint4x4.constructors.h"
#include "../src/submodules/constructors/bool2x2.constructors.h"
#include "../src/submodules/constructors/bool3x3.constructors.h"
#include "../src/submodules/constructors/bool4x4.constructors.h"
#include "../src/submodules/constructors/float2x2.constructors.h"
#include "../src/submodules/constructors/float3x3.constructors.h"
#include "../src/submodules/constructors/float4x4.constructors.h"

#include "../src/submodules/operators/int2.operators.h"
#include "../src/submodules/operators/int3.operators.h"
#include "../src/submodules/operators/int4.operators.h"
#include "../src/submodules/operators/uint2.operators.h"
#include "../src/submodules/operators/uint3.operators.h"
#include "../src/submodules/operators/uint4.operators.h"
#include "../src/submodules/operators/float2.operators.h"
#include "../src/submodules/operators/float3.operators.h"
#include "../src/submodules/operators/float4.operators.h"
    
#include "../src/submodules/operators/int2x2.operators.h"
#include "../src/submodules/operators/int3x3.operators.h"
#include "../src/submodules/operators/int4x4.operators.h"
#include "../src/submodules/operators/uint2x2.operators.h"
#include "../src/submodules/operators/uint3x3.operators.h"
#include "../src/submodules/operators/uint4x4.operators.h"
#include "../src/submodules/operators/float2x2.operators.h"
#include "../src/submodules/operators/float3x3.operators.h"
#include "../src/submodules/operators/float4x4.operators.h"

#include "../src/submodules/functions/bool.func.h"
#include "../src/submodules/functions/conversion.h"

#include "../src/submodules/functions/int.func.h"
#include "../src/submodules/functions/int2.func.h"
#include "../src/submodules/functions/int3.func.h"
#include "../src/submodules/functions/int4.func.h"
#include "../src/submodules/functions/uint.func.h"  
#include "../src/submodules/functions/uint2.func.h"
#include "../src/submodules/functions/uint3.func.h"
#include "../src/submodules/functions/uint4.func.h"
#include "../src/submodules/functions/float.func.h"
#include "../src/submodules/functions/float2.func.h"
#include "../src/submodules/functions/float3.func.h"
#include "../src/submodules/functions/float4.func.h" 

#include "../src/submodules/functions/int2x2.func.h"
#include "../src/submodules/functions/int3x3.func.h"
#include "../src/submodules/functions/int4x4.func.h"      
#include "../src/submodules/functions/uint2x2.func.h"
#include "../src/submodules/functions/uint3x3.func.h"
#include "../src/submodules/functions/uint4x4.func.h"       
#include "../src/submodules/functions/float2x2.func.h"
#include "../src/submodules/functions/float3x3.func.h"
#include "../src/submodules/functions/float4x4.func.h"

#include "../src/module_begin.h"
