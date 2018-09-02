#pragma once

#include <math.h>

#ifndef HLSL_ASSERT
#define HLSL_ASSERT(exp, msg)
#endif

#undef min // When Windows.h is included, min is an macro
#undef max // When Windows.h is included, max is an macro
