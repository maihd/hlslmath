#include <type_traits>

#include "../test_framework.h"

/// We don't care about: trivial, pod, standard layout.
/// What we care is that int3 memcpyable, but standard layout is memcpyable.
static_assert(!std::is_pod<int3>::value, "int3 is pod");
static_assert(!std::is_trivial<int3>::value, "int3 is trivial");
static_assert(std::is_standard_layout<int3>::value, "int3 is not trivial");

/// This struct to prove that int3 is memcpyable
union int3MustBeComposableInUnion
{
    int3 data;
    int3 extraData;
};

DEFINE_UNIT_TEST("Working with int3")
{
    const int3 a = int3(0, 0, 0);
    const int3 b = int3(0, 0, 0);

    TEST(all(a == b), "a should equal to b");
    TEST(!any(a != b), "a should equal to b");

    TEST(all(a + b == int3(0, 0, 0)), "a + b should equal to zero");
}
