#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "expressions.h"
#include "casting.h"
#include "constants.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify operator_precedence_1", "validating order of operations") {
	REQUIRE(operator_precedence_1(3, 6, 3) == 5);
}

TEST_CASE("Verify operator_precedence_2", "validating parentheses use") {
	REQUIRE(operator_precedence_2(3, 6, 3) == 3);
}

TEST_CASE("Verify convert int to double", "int converted to double") {
	REQUIRE(convert_to_double(10, .5) == 5);
}

TEST_CASE("Verify convert double to int", "double converted to int") {
	REQUIRE(convert_double_to_int(10.5) == 10);
}

TEST_CASE("Verify get area of circle") 
{
	REQUIRE(get_area_of_circle(10) == 314.159);
}