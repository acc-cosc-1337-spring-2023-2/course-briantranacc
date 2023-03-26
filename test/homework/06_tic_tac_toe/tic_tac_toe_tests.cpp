#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test TicTacToe")
{
	TicTacToe test;

	test.mark_board(1);
	REQUIRE(test.game_over() == false);

	test.mark_board(2);
	REQUIRE(test.game_over() == false);
	
	test.mark_board(3);
	REQUIRE(test.game_over() == false);

	test.mark_board(4);
	REQUIRE(test.game_over() == false);

	test.mark_board(5);
	REQUIRE(test.game_over() == false);

	test.mark_board(7);
	REQUIRE(test.game_over() == false);

	test.mark_board(6);
	REQUIRE(test.game_over() == false);

	test.mark_board(9);
	REQUIRE(test.game_over() == false);

	test.mark_board(8);
	REQUIRE(test.game_over() == true);
}