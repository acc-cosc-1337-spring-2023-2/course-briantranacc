#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test game over if 9 slots are selected.")
{
	TicTacToe test;

	test.start_game("X");

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

	REQUIRE(test.get_winner() == "C");
}

TEST_CASE("Test first player set to X")
{
	TicTacToe test;

	test.start_game("X");
	REQUIRE(test.get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
	TicTacToe test;

	test.start_game("O");
	REQUIRE(test.get_player() == "O");
}

TEST_CASE("Test win by first column")
{
	TicTacToe test;

	test.start_game("X");

	test.mark_board(1);
	test.mark_board(2);
	test.mark_board(4);
	test.mark_board(3);
	test.mark_board(7);

	REQUIRE(test.game_over() == true);
	REQUIRE(test.get_winner() == "X");
}

TEST_CASE("Test win by second column")
{
	TicTacToe test;

	test.start_game("X");
	
	test.mark_board(2);
	test.mark_board(3);
	test.mark_board(5);
	test.mark_board(7);
	test.mark_board(8);

	REQUIRE(test.game_over() == true);
	REQUIRE(test.get_winner() == "X");
}

TEST_CASE("Test win by third column")
{
	TicTacToe test;

	test.start_game("X");
	
	test.mark_board(3);
	test.mark_board(4);
	test.mark_board(6);
	test.mark_board(5);
	test.mark_board(9);

	REQUIRE(test.game_over() == true);
	REQUIRE(test.get_winner() == "X");
}

TEST_CASE("Test win by first row")
{
	TicTacToe test;

	test.start_game("X");
	
	test.mark_board(1);
	test.mark_board(4);
	test.mark_board(2);
	test.mark_board(5);
	test.mark_board(3);

	REQUIRE(test.game_over() == true);
	REQUIRE(test.get_winner() == "X");
}

TEST_CASE("Test win by second row")
{
	TicTacToe test;

	test.start_game("X");
	
	test.mark_board(4);
	test.mark_board(7);
	test.mark_board(5);
	test.mark_board(8);
	test.mark_board(6);

	REQUIRE(test.game_over() == true);
	REQUIRE(test.get_winner() == "X");
}

TEST_CASE("Test win by third row")
{
	TicTacToe test;

	test.start_game("X");
	
	test.mark_board(7);
	test.mark_board(1);
	test.mark_board(8);
	test.mark_board(2);
	test.mark_board(9);

	REQUIRE(test.game_over() == true);
	REQUIRE(test.get_winner() == "X");
}

TEST_CASE("Test win diagonally from top left")
{
	TicTacToe test;

	test.start_game("X");
	
	test.mark_board(1);
	test.mark_board(4);
	test.mark_board(5);
	test.mark_board(6);
	test.mark_board(9);

	REQUIRE(test.game_over() == true);
	REQUIRE(test.get_winner() == "X");
}

TEST_CASE("Test win diagonally from bottom left")
{
	TicTacToe test;

	test.start_game("X");
	
	test.mark_board(7);
	test.mark_board(6);
	test.mark_board(5);
	test.mark_board(4);
	test.mark_board(3);

	REQUIRE(test.game_over() == true);
	REQUIRE(test.get_winner() == "X");
}

TEST_CASE("Test TicTacToe manager")
{
	TicTacToe test;
	TicTacToeManager manager;

	int x_wins, o_wins, ties;

	//Player X
	test.start_game("X");
	test.mark_board(7);
	test.mark_board(6);
	test.mark_board(5);
	test.mark_board(4);
	test.mark_board(3);
	test.game_over();
	manager.save_game(test);

	//Player O
	test.start_game("O");
	test.mark_board(7);
	test.mark_board(6);
	test.mark_board(5);
	test.mark_board(4);
	test.mark_board(3);
	test.game_over();
	manager.save_game(test);

	//Tie
	test.start_game("X");
	test.mark_board(1);
	test.mark_board(2);
	test.mark_board(3);
	test.mark_board(4);
	test.mark_board(5);
	test.mark_board(7);
	test.mark_board(6);
	test.mark_board(9);
	test.mark_board(8);
	test.game_over();
	manager.save_game(test);

	//Counts winner totals
	manager.get_winner_total(x_wins, o_wins, ties);
	REQUIRE(x_wins == 1);
	REQUIRE(o_wins == 1);
	REQUIRE(ties == 1);
}