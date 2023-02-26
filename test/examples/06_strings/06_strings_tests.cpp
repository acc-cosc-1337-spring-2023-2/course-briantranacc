#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "function_str.h"
#include "for_ranged_str.h"

using std::string;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test string value, ref, and const ref params")
{
	string str1 = "C++";
	string str2 = "C++";
	string str3 = "C++";

	str_val_ref_param(str1, str2, str3);

	REQUIRE(str1 == "C++");
	REQUIRE(str2 == "changed");
	REQUIRE(str3 == "C++");

}

TEST_CASE("Test string value parameter w for range")
{
	string str = "C++";
	iterate_string_val_params(str);

	REQUIRE(str == "C++");
}

TEST_CASE("Test string ref parameter w for range")
{
	string str = "C++";
	iterate_string_ref_params(str);

	REQUIRE(str == "zzz");
}