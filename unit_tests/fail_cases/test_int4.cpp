#include <type_traits>

#include "../test_framework.h"

/// We don't care about: trivial, pod, standard layout.
/// What we care is that int4 memcpyable, but standard layout is memcpyable.
static_assert(!std::is_pod<int4>::value, "int4 is pod");
static_assert(!std::is_trivial<int4>::value, "int4 is trivial");
static_assert(std::is_standard_layout<int4>::value, "int4 is not trivial");

/// This struct to prove that int4 is memcpyable
union int4MustBeComposableInUnion
{
    int4 data;
    int4 extraData;
};

DEFINE_UNIT_TEST("Working with int4")
{
    const int4 a = int4(0, 0, 0, 0);
    const int4 b = int4(0, 0, 0, 0);

    TEST(all(a == b), "a should equal to b");
    TEST(!any(a != b), "a should equal to b");

    TEST(all(a + b == int4(0, 0, 0, 0)), "a + b should equal to zero");
}
