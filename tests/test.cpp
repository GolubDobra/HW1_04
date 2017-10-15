#include "catch.hpp"
#include <Stack.hpp>

TEST_CASE("output values should match input values", "[stack]") {
  Stack<int> IntArr;
	REQUIRE(IntArr.count() == 0);
}
