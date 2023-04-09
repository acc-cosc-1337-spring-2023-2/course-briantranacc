#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using std::cout; using std::cin; 

int main() 
{
	TicTacToe game;
	TicTacToeManager manager;
	string playerStart;
	auto anotherGame = 'y';
	int x, o, t;

	do
	{
		cout<<"Enter X or O to start: ";
		cin>>playerStart;
		cout<<"To exit the game whenever, enter 0.\n\n";

		game.start_game(playerStart);

		while(!game.game_over())
		{
			cin>>game;
			cout<<game;
		}
		

		cout<<"\nGame over. Winner: "<<game.get_winner()<<"\n";
		manager.save_game(game);
		manager.get_winner_total(x, o, t);

		cout<<"O wins: "<<x<<"\n";
		cout<<"X wins: "<<o<<"\n";
		cout<<"Ties: "<<t<<"\n";

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