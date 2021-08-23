#include <type_traits>

#include "../test_framework.h"

/// We don't care about: trivial, pod, standard layout.
/// What we care is that float3 memcpyable, but standard layout is memcpyable.
static_assert(!std::is_pod<float4>::value, "float4 is pod");
static_assert(!std::is_trivial<float4>::value, "float4 is trivial");
static_assert(std::is_standard_layout<float4>::value, "float4 is not trivial");

/// This struct to prove that float4 is memcpyable
union Float4MustBeComposableInUnion
{
    float4 data;
    float4 extraData;
};

DEFINE_UNIT_TEST("Working with float4")
{
    const float4 a = float4(0, 0);
    const float4 b = float4(0, 0);

    TEST(all(a == b), "a should equal to b");
    TEST(!any(a != b), "a should equal to b");

    TEST(all(a + b == float4(0, 0, 0, 0)), "a + b should equal to zero");

    TEST(length(a) == 0, "length of a is not true");
}
