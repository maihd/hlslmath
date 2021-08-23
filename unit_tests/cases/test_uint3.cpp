#include <type_traits>

#include "../test_framework.h"

/// We don't care about: trivial, pod, standard layout.
/// What we care is that uint3 memcpyable, but standard layout is memcpyable.
static_assert(!std::is_pod<uint3>::value, "uint3 is pod");
static_assert(!std::is_trivial<uint3>::value, "uint3 is trivial");
static_assert(std::is_standard_layout<uint3>::value, "uint3 is not trivial");

/// This struct to prove that uint3 is memcpyable
union uint3MustBeComposableInUnion
{
    uint3 data;
    uint3 extraData;
};

DEFINE_UNIT_TEST("Working with uint3")
{
    const uint3 a = uint3(0, 0, 0);
    const uint3 b = uint3(0, 0, 0);

    TEST(all(a == b), "a should equal to b");
    TEST(!any(a != b), "a should equal to b");

    TEST(all(a + b == uint3(0, 0, 0)), "a + b should equal to zero");
}
