#include "catch.hpp"
#include <Stack.hpp>

TEST_CASE("Check functions", "[stack]") {
	SECTION("Check INIT")
	{
		Stack<int> IntArr;
		REQUIRE(IntArr.count() == 0);
	}
}

