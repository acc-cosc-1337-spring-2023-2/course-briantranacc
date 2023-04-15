#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<memory>

using std::make_unique; using std::unique_ptr;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test game over if 9 slots are selected.")
{
	unique_ptr<TicTacToe> test = make_unique<TicTacToe3>();

	test->start_game("X");

	test->mark_board(1);
	REQUIRE(test->game_over() == false);

	test->mark_board(2);
	REQUIRE(test->game_over() == false);
	
	test->mark_board(3);
	REQUIRE(test->game_over() == false);

	test->mark_board(4);
	REQUIRE(test->game_over() == false);

	test->mark_board(5);
	REQUIRE(test->game_over() == false);

	test->mark_board(7);
	REQUIRE(test->game_over() == false);

	test->mark_board(6);
	REQUIRE(test->game_over() == false);

	test->mark_board(9);
	REQUIRE(test->game_over() == false);

	test->mark_board(8);
	REQUIRE(test->game_over() == true);

	REQUIRE(test->get_winner() == "C");
}


TEST_CASE("Test first player set to X")
{
	unique_ptr<TicTacToe> test = make_unique<TicTacToe3>();

	test->start_game("X");
	REQUIRE(test->get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
	unique_ptr<TicTacToe> test = make_unique<TicTacToe3>();

	test->start_game("O");
	REQUIRE(test->get_player() == "O");
}

TEST_CASE("Test win by first column")
{
	unique_ptr<TicTacToe> test = make_unique<TicTacToe3>();

	test->start_game("X");

	test->mark_board(1);
	test->mark_board(2);
	test->mark_board(4);
	test->mark_board(3);
	test->mark_board(7);

	REQUIRE(test->game_over() == true);
	REQUIRE(test->get_winner() == "X");
}

TEST_CASE("Test win by second column")
{
	unique_ptr<TicTacToe> test = make_unique<TicTacToe3>();

	test->start_game("X");
	
	test->mark_board(2);
	test->mark_board(3);
	test->mark_board(5);
	test->mark_board(7);
	test->mark_board(8);

	REQUIRE(test->game_over() == true);
	REQUIRE(test->get_winner() == "X");
}

TEST_CASE("Test win by third column")
{
	unique_ptr<TicTacToe> test = make_unique<TicTacToe3>();

	test->start_game("X");
	
	test->mark_board(3);
	test->mark_board(4);
	test->mark_board(6);
	test->mark_board(5);
	test->mark_board(9);

	REQUIRE(test->game_over() == true);
	REQUIRE(test->get_winner() == "X");
}

TEST_CASE("Test win by first row")
{
	unique_ptr<TicTacToe> test = make_unique<TicTacToe3>();

	test->start_game("X");
	
	test->mark_board(1);
	test->mark_board(4);
	test->mark_board(2);
	test->mark_board(5);
	test->mark_board(3);

	REQUIRE(test->game_over() == true);
	REQUIRE(test->get_winner() == "X");
}

TEST_CASE("Test win by second row")
{
	unique_ptr<TicTacToe> test = make_unique<TicTacToe3>();

	test->start_game("X");
	
	test->mark_board(4);
	test->mark_board(7);
	test->mark_board(5);
	test->mark_board(8);
	test->mark_board(6);

	REQUIRE(test->game_over() == true);
	REQUIRE(test->get_winner() == "X");
}

TEST_CASE("Test win by third row")
{
	unique_ptr<TicTacToe> test = make_unique<TicTacToe3>();

	test->start_game("X");
	
	test->mark_board(7);
	test->mark_board(1);
	test->mark_board(8);
	test->mark_board(2);
	test->mark_board(9);

	REQUIRE(test->game_over() == true);
	REQUIRE(test->get_winner() == "X");
}

TEST_CASE("Test win diagonally from top left")
{
	unique_ptr<TicTacToe> test = make_unique<TicTacToe3>();

	test->start_game("X");
	
	test->mark_board(1);
	test->mark_board(4);
	test->mark_board(5);
	test->mark_board(6);
	test->mark_board(9);

	REQUIRE(test->game_over() == true);
	REQUIRE(test->get_winner() == "X");
}

TEST_CASE("Test win diagonally from bottom left")
{
	unique_ptr<TicTacToe> test = make_unique<TicTacToe3>();

	test->start_game("X");
	
	test->mark_board(7);
	test->mark_board(6);
	test->mark_board(5);
	test->mark_board(4);
	test->mark_board(3);

	REQUIRE(test->game_over() == true);
	REQUIRE(test->get_winner() == "X");
}



TEST_CASE("Test TicTacToe manager for 3x3")
{
	unique_ptr<TicTacToe> test = make_unique<TicTacToe3>();
	TicTacToeManager manager;

	int x_wins, o_wins, ties;

	//Player X
	test->start_game("X");
	test->mark_board(7);
	test->mark_board(6);
	test->mark_board(5);
	test->mark_board(4);
	test->mark_board(3);
	test->game_over();
	manager.save_game(test);

	//Player O
	unique_ptr<TicTacToe> test2 = make_unique<TicTacToe3>();
	test2->start_game("O");
	test2->mark_board(7);
	test2->mark_board(6);
	test2->mark_board(5);
	test2->mark_board(4);
	test2->mark_board(3);
	test2->game_over();
	manager.save_game(test2);

	//Tie
	unique_ptr<TicTacToe> test3 = make_unique<TicTacToe3>();
	test3->start_game("X");
	test3->mark_board(1);
	test3->mark_board(2);
	test3->mark_board(3);
	test3->mark_board(4);
	test3->mark_board(5);
	test3->mark_board(7);
	test3->mark_board(6);
	test3->mark_board(9);
	test3->mark_board(8);
	test3->game_over();
	manager.save_game(test3);

	//Counts winner totals
	manager.get_winner_total(x_wins, o_wins, ties);
	REQUIRE(x_wins == 1);
	REQUIRE(o_wins == 1);
	REQUIRE(ties == 1);
}



/*



TESTING 4X4 BELOW



*/ 


TEST_CASE("Test game over if 16 slots are selected.")
{
	unique_ptr<TicTacToe> test = make_unique<TicTacToe4>();

	test->start_game("X");

	test->mark_board(1);
	REQUIRE(test->game_over() == false);

	test->mark_board(2);
	REQUIRE(test->game_over() == false);
	
	test->mark_board(3);
	REQUIRE(test->game_over() == false);

	test->mark_board(4);
	REQUIRE(test->game_over() == false);

	test->mark_board(5);
	REQUIRE(test->game_over() == false);

	test->mark_board(6);
	REQUIRE(test->game_over() == false);

	test->mark_board(7);
	REQUIRE(test->game_over() == false);

	test->mark_board(8);
	REQUIRE(test->game_over() == false);

	test->mark_board(10);
	REQUIRE(test->game_over() == false);

	test->mark_board(9);
	REQUIRE(test->game_over() == false);

	test->mark_board(12);
	REQUIRE(test->game_over() == false);

	test->mark_board(11);
	REQUIRE(test->game_over() == false);

	test->mark_board(13);
	REQUIRE(test->game_over() == false);

	test->mark_board(14);
	REQUIRE(test->game_over() == false);

	test->mark_board(15);
	REQUIRE(test->game_over() == false);

	test->mark_board(16);
	REQUIRE(test->game_over() == true);

	REQUIRE(test->get_winner() == "C");
}


TEST_CASE("Test win by first column 4x4")
{
	unique_ptr<TicTacToe> test = make_unique<TicTacToe4>();

	test->start_game("X");

	test->mark_board(1);//x
	test->mark_board(2);
	test->mark_board(5);//x
	test->mark_board(3);
	test->mark_board(9);//x
	test->mark_board(7);
	test->mark_board(13);//x

	REQUIRE(test->game_over() == true);
	REQUIRE(test->get_winner() == "X");
}

TEST_CASE("Test win by second column 4x4")
{
	unique_ptr<TicTacToe> test = make_unique<TicTacToe4>();

	test->start_game("X");
	
	test->mark_board(2);//x
	test->mark_board(1);
	test->mark_board(6);//x
	test->mark_board(3);
	test->mark_board(10);//x
	test->mark_board(7);
	test->mark_board(14);//x

	REQUIRE(test->game_over() == true);
	REQUIRE(test->get_winner() == "X");
}

TEST_CASE("Test win by third column 4x4")
{
	unique_ptr<TicTacToe> test = make_unique<TicTacToe4>();

	test->start_game("X");
	
	test->mark_board(3);//x
	test->mark_board(1);
	test->mark_board(7);//x
	test->mark_board(6);
	test->mark_board(11);//x
	test->mark_board(9);
	test->mark_board(15);//x

	REQUIRE(test->game_over() == true);
	REQUIRE(test->get_winner() == "X");
}

TEST_CASE("Test win by fourth column 4x4")
{
	unique_ptr<TicTacToe> test = make_unique<TicTacToe4>();

	test->start_game("X");
	
	test->mark_board(4);//x
	test->mark_board(1);
	test->mark_board(8);//x
	test->mark_board(3);
	test->mark_board(12);//x
	test->mark_board(7);
	test->mark_board(16);//x

	REQUIRE(test->game_over() == true);
	REQUIRE(test->get_winner() == "X");
}

TEST_CASE("Test win by first row 4x4")
{
	unique_ptr<TicTacToe> test = make_unique<TicTacToe4>();

	test->start_game("X");
	
	test->mark_board(1);//x
	test->mark_board(16);
	test->mark_board(2);//x
	test->mark_board(9);
	test->mark_board(3);//x
	test->mark_board(13);
	test->mark_board(4);//x

	REQUIRE(test->game_over() == true);
	REQUIRE(test->get_winner() == "X");
}

TEST_CASE("Test win by second row 4x4")
{
	unique_ptr<TicTacToe> test = make_unique<TicTacToe4>();

	test->start_game("X");
	
	test->mark_board(5);//x
	test->mark_board(16);
	test->mark_board(6);//x
	test->mark_board(9);
	test->mark_board(7);//x
	test->mark_board(13);
	test->mark_board(8);//x

	REQUIRE(test->game_over() == true);
	REQUIRE(test->get_winner() == "X");
}

TEST_CASE("Test win by third row 4x4")
{
	unique_ptr<TicTacToe> test = make_unique<TicTacToe4>();

	test->start_game("X");
	
	test->mark_board(9);//x
	test->mark_board(16);
	test->mark_board(10);//x
	test->mark_board(1);
	test->mark_board(11);//x
	test->mark_board(13);
	test->mark_board(12);//x

	REQUIRE(test->game_over() == true);
	REQUIRE(test->get_winner() == "X");
}

TEST_CASE("Test win by fourth row 4x4")
{
	unique_ptr<TicTacToe> test = make_unique<TicTacToe4>();

	test->start_game("X");
	
	test->mark_board(13);//x
	test->mark_board(1);
	test->mark_board(14);//x
	test->mark_board(2);
	test->mark_board(15);//x
	test->mark_board(7);
	test->mark_board(16);//x

	REQUIRE(test->game_over() == true);
	REQUIRE(test->get_winner() == "X");
}

TEST_CASE("Test win diagonally from top left 4x4")
{
	unique_ptr<TicTacToe> test = make_unique<TicTacToe4>();

	test->start_game("X");
	
	test->mark_board(1);//x
	test->mark_board(2);
	test->mark_board(6);//x
	test->mark_board(5);
	test->mark_board(11);//x
	test->mark_board(7);
	test->mark_board(16);//x

	REQUIRE(test->game_over() == true);
	REQUIRE(test->get_winner() == "X");
}

TEST_CASE("Test win diagonally from bottom left 4x4")
{
	unique_ptr<TicTacToe> test = make_unique<TicTacToe4>();

	test->start_game("X");
	
	test->mark_board(4);//x
	test->mark_board(2);
	test->mark_board(7);//x
	test->mark_board(5);
	test->mark_board(10);//x
	test->mark_board(9);
	test->mark_board(13);//x

	REQUIRE(test->game_over() == true);
	REQUIRE(test->get_winner() == "X");
}

/**/
TEST_CASE("Test TicTacToe manager for 4x4")
{
	unique_ptr<TicTacToe> test = make_unique<TicTacToe4>();
	TicTacToeManager manager;

	int x_wins, o_wins, ties;

	//Player X
	test->start_game("X");
	test->mark_board(4);//x
	test->mark_board(2);
	test->mark_board(7);//x
	test->mark_board(5);
	test->mark_board(10);//x
	test->mark_board(9);
	test->mark_board(13);//x
	test->game_over();
	manager.save_game(test);

	//Player O
	unique_ptr<TicTacToe> test2 = make_unique<TicTacToe4>();
	test2->start_game("O");
	test2->mark_board(4);//o
	test2->mark_board(2);
	test2->mark_board(7);//o
	test2->mark_board(5);
	test2->mark_board(10);//o
	test2->mark_board(9);
	test2->mark_board(13);//o
	test2->game_over();
	manager.save_game(test2);

	//Tie
	unique_ptr<TicTacToe> test3 = make_unique<TicTacToe4>();
	test3->start_game("X");
	test3->mark_board(1);
	test3->mark_board(2);
	test3->mark_board(3);
	test3->mark_board(4);
	test3->mark_board(5);
	test3->mark_board(6);
	test3->mark_board(7);
	test3->mark_board(8);
	test3->mark_board(10);
	test3->mark_board(9);
	test3->mark_board(12);
	test3->mark_board(11);
	test3->mark_board(13);
	test3->mark_board(14);
	test3->mark_board(15);
	test3->mark_board(16);
	test3->game_over();
	manager.save_game(test3);

	//Counts winner totals
	manager.get_winner_total(x_wins, o_wins, ties);
	REQUIRE(x_wins == 1);
	REQUIRE(o_wins == 1);
	REQUIRE(ties == 1);
}
