#include "tic_tac_toe.h"

using std::cout; using std::cin;

int main() 
{
	TicTacToe game;
	string playerStart;
	int position;
	auto anotherGame = 'y';

	do
	{
		cout<<"Enter X or O: ";
		cin>>playerStart;

		game.start_game(playerStart);

		while (!game.game_over())
		{
			cout<<"Enter position from 1 to 9: ";
			cin>>position;
			game.mark_board(position);
			game.display_board();
		}

		cout<<"\nGame over\n";

		cout<<"\nGo again? Enter y for yes or n for no: ";
		cin>>anotherGame;

		game.start_game(playerStart);
	}
	while (anotherGame == 'y');

	return 0;
}