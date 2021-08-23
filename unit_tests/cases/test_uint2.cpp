#include <type_traits>

#include "../test_framework.h"

/// We don't care about: trivial, pod, standard layout.
/// What we care is that uint2 memcpyable, but standard layout is memcpyable.
static_assert(!std::is_pod<uint2>::value, "uint2 is pod");
static_assert(!std::is_trivial<uint2>::value, "uint2 is trivial");
static_assert(std::is_standard_layout<uint2>::value, "uint2 is not trivial");

/// This struct to prove that int2 is memcpyable
union uint2MustBeComposableInUnion
{
    uint2 data;
    uint2 extraData;
};

DEFINE_UNIT_TEST("Working with uint2")
{
    const uint2 a = uint2(0, 0);
    const uint2 b = uint2(0, 0);

    TEST(all(a == b), "a should equal to b");
    TEST(!any(a != b), "a should equal to b");

    TEST(all(a + b == uint2(0, 0)), "a + b should equal to zero");
}
