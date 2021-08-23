#include <type_traits>

#include "../test_framework.h"

/// We don't care about: trivial, pod, standard layout.
/// What we care is that float3 memcpyable, but standard layout is memcpyable.
static_assert(!std::is_pod<float3>::value, "float3 is pod");
static_assert(!std::is_trivial<float3>::value, "float3 is trivial");
static_assert(std::is_standard_layout<float3>::value, "float3 is not trivial");

/// This struct to prove that float3 is memcpyable
union float3MustBeComposableInUnion
{
    float3 data;
    float3 extraData;
};

DEFINE_UNIT_TEST("Working with float3")
{
    const float3 a = float3(0, 0, 0);
    const float3 b = float3(0, 0, 0);

    TEST(all(a == b), "a should equal to b");
    TEST(!any(a != b), "a should equal to b");

    TEST(all(a + b == float3(0, 0, 0)), "a + b should equal to zero");

    TEST(length(a) == 0, "length of a is not true");
}
