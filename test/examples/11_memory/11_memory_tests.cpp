#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"
#include "my_vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*
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

TEST_CASE("Test create Vector v1 from existing v") 
{//looking at how class copy works
	Vector v(3);
	Vector v1 = v;

	REQUIRE(v1.Size() == v.Size());
	REQUIRE(v1.Capacity() == v.Capacity());

}

TEST_CASE("Test my vector create 2 vectors v v1 overwrite v1 with v") 
{
	Vector v(3);
	Vector v1(3);
	v1 = v;//C++ doesn't know how to handle and equal sign with our class variables
}


TEST_CASE("Test moving v into v1") 
{
	Vector v(3);//empty after 54 executes
	Vector v1 = std::move(v);

}
*/

TEST_CASE("Overwrite existing vector with a value return vector function") 
{
	Vector v(3);
	v = get_vector();
}