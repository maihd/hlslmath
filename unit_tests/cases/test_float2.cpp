#include <type_traits>

#include "../test_framework.h"

/// We don't care about: trivial, pod, standard layout.
/// What we care is that float2 memcpyable, but standard layout is memcpyable.
static_assert(!std::is_pod<float2>::value, "float2 is pod");
static_assert(!std::is_trivial<float2>::value, "float2 is trivial");
static_assert(std::is_standard_layout<float2>::value, "float2 is not trivial");

/// This struct to prove that float2 is memcpyable
union Float2MustBeComposableInUnion
{
    float2 data;
    float2 extraData;
};

DEFINE_UNIT_TEST("Working with float2")
{
    float2 a = float2(0, 0);
    float2 b = float2(0, 0);

    TEST(all(a == b), "a should equal to b");
    TEST(!any(a != b), "a should equal to b");

    TEST(all(a + b == float2(0, 0)), "a + b should equal to zero");

    TEST(length(a) == 0, "length of a is not true");
}