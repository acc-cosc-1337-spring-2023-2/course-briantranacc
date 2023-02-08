#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test anded result", "and truth table")
{
	REQUIRE(get_anded_result(true, true) == true);
	REQUIRE(get_anded_result(true, false) == false);
	REQUIRE(get_anded_result(false, true) == false);
	REQUIRE(get_anded_result(false, false) == false);
}

TEST_CASE("Test ored result", "or truth table")
{
	REQUIRE(get_ored_result(true, true) == true);
	REQUIRE(get_ored_result(true, false) == true);
	REQUIRE(get_ored_result(false, true) == true);
	REQUIRE(get_ored_result(false, false) == false);
}

TEST_CASE("Test notted result")
{
	REQUIRE(get_notted_result(true) == false);
	REQUIRE(get_notted_result(false) == true);
}