#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>

#include "../src/example.hpp"

TEST_CASE("Test Equals")
{
    using Catch::Matchers::WithinRel;

    REQUIRE(Example::valueInt == Example::getInt());

    REQUIRE_THAT(Example::valueFloat, WithinRel(Example::getFloat()));
}
