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
		cout<<"Enter X or O to start: ";
		cin>>playerStart;

		game.start_game(playerStart);
		cout<<"To exit the game whenever, enter 0.\n\n";

		while (!game.game_over())
		{
			cout<<"Enter position from 1 to 9: ";
			cin>>position;

			if (position < 1 || position > 9) //prompts user to reenter number if 
			{								  //it is out of range required range
				if (position == 0)
					break;
				cout<<"Invalid number. Enter a number from 1 to 9: ";
				cin>>position;
			}

			game.mark_board(position);
			game.display_board();
		}

		cout<<"\nGame over. Winner: "<<game.get_winner()<<"\n";

		cout<<"\nGo again? Enter y for yes or n for no: ";
		cin>>anotherGame;

		//input validation so user enters y or n
		while(anotherGame != 'y' && anotherGame != 'n' && anotherGame != 'Y' && anotherGame && 'N')
		{
			cout<<"Invalid input. Enter y or n: ";
			cin>>anotherGame;
		}
	}
	while (anotherGame == 'y' || anotherGame == 'Y');

	return 0;
}