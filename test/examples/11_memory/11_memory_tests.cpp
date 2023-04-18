#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"
#include "my_vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test ref ptr params") 
{
	int num1 = 1;
	int num2 = 2;
	ref_ptr_params(num1, &num2);

	REQUIRE(num1 == 10);
	REQUIRE(num2 == 20);
}

TEST_CASE("Test my vector list initial size") 
{
	Vector v(3);

	REQUIRE(v.Size() == 0);
}

TEST_CASE("Test my vector capacity") 
{
	Vector v(3);

	REQUIRE(v.Capacity() == 3);
}