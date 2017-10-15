#include "catch.hpp"
#include <Stack.hpp>

TEST_CASE("Check init", "[stack]") {
	Stack<int> IntArr;
	REQUIRE(IntArr.count() == 0);
}
