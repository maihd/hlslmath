#include <type_traits>

#include "../test_framework.h"

/// We don't care about: trivial, pod, standard layout.
/// What we care is that int2 memcpyable, but standard layout is memcpyable.
static_assert(!std::is_pod<int2>::value, "int2 is pod");
static_assert(!std::is_trivial<int2>::value, "int2 is trivial");
static_assert(std::is_standard_layout<int2>::value, "int2 is not trivial");

/// This struct to prove that int2 is memcpyable
union Int2MustBeComposableInUnion
{
    int2 data;
    int2 extraData;
};

DEFINE_UNIT_TEST("Working with int2")
{
    const int2 a = int2(0, 0);
    const int2 b = int2(0, 0);

    TEST(all(a == b), "a should equal to b");
    TEST(!any(a != b), "a should equal to b");

    TEST(all(a + b == int2(0, 0)), "a + b should equal to zero");
}