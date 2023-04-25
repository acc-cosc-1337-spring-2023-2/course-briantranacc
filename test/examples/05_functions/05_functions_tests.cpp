#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "val_ref.h"
#include "default.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test function value(copy) param")
{
	auto num = 10;
	val_params(num);
	
	REQUIRE(num == 10);
}

TEST_CASE("Test function reference parameter")
{
	auto num = 10;
	ref_params(num);
	
	REQUIRE(num == 20);
}

TEST_CASE("Test get gross pay default parameters")
{
	REQUIRE(get_gross_pay() == 800);//default hours = 40, pay rate = 20
	REQUIRE(get_gross_pay(30, 20) == 600);
	REQUIRE(get_gross_pay(40) == 800);
	REQUIRE(get_gross_pay(40, 20) == 800);
	REQUIRE(get_gross_pay(41, 20) == 820);
	REQUIRE(get_gross_pay(20) == 400);
}

TEST_CASE("Test get gross pay function overload")
{
	REQUIRE(get_gross_pay(40, 7.5) == 300);
	REQUIRE(get_gross_pay(40, 20, 100) == 801);
}