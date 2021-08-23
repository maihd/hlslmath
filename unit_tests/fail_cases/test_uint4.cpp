#include <type_traits>

#include "../test_framework.h"

/// We don't care about: trivial, pod, standard layout.
/// What we care is that uint4 memcpyable, but standard layout is memcpyable.
static_assert(!std::is_pod<uint4>::value, "uint4 is pod");
static_assert(!std::is_trivial<uint4>::value, "uint4 is trivial");
static_assert(std::is_standard_layout<uint4>::value, "uint4 is not trivial");

/// This struct to prove that uint4 is memcpyable
union uint4MustBeComposableInUnion
{
    uint4 data;
    uint4 extraData;
};

DEFINE_UNIT_TEST("Working with uint4")
{
    const uint4 a = uint4(0, 0, 0, 0);
    const uint4 b = uint4(0, 0, 0, 0);

    TEST(all(a == b), "a should equal to b");
    TEST(!any(a != b), "a should equal to b");

    TEST(all(a + b == uint4(0, 0, 0, 0)), "a + b should equal to zero");
}
