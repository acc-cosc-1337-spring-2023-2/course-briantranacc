//cpp
#include "tic_tac_toe.h"

using std::cout; using std::cin;

bool TicTacToe::game_over()
{
    if (check_column_win() == true || check_row_win() == true || check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }
    else if (check_board_full() == true)
    {
        winner = "C";
        return true;
    }
    else
        return false;

}

void TicTacToe::start_game(string first_player)
{
    //ensures that user enters either lower or uppercase x or o
    while (first_player != "X" && first_player != "O" && first_player != "x" && first_player != "o")
    {
        cout<<"Invalid player. Enter X or O: ";
        cin>>first_player;
    }

    //converts lowercase x or o to uppercase
    if (first_player == "x")
        first_player = "X";
    else if (first_player == "o")
        first_player = "O";

    player = first_player;

    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}


ostream& operator<<(ostream& out, const TicTacToe& game)
{
    if(game.pegs.size() == 9)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                out<<game.pegs[(i * 3) + j];
                
                if (j < 2)
                    out<<"|";
            }
            if (i < 2)
                out<<"\n";
        }
    }
    else if(game.pegs.size() == 16)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                out<<game.pegs[(i * 4) + j];
                
                if (j < 3)
                    out<<"|";
            }
            if (i < 3)
                out<<"\n";
        }
    }

    out<<"\n";
    return out;
}


istream& operator>>(istream& in, TicTacToe& game)
{
    int position;
    int max = game.pegs.size();

    while (true)
	{   
		cout<<"Enter position from 1 to "<<max<<": ";
		in>>position;

		if (position >= 1 && position <= max)  
		{
			break;
		}
        else if(position == 0)
        {
            cout<<"\nEnding game...\n";
            exit(0);
        }
        else
        {
            cout<<"Invalid number.";
        }
	}

    game.mark_board(position);
    return in;
}


void TicTacToe::set_next_player()
{
    if (player == "X")
        player = "O";
    else
        player = "X";
}


bool TicTacToe::check_board_full()
{
    for (int i = 0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ")
            return false;
    }
    return true;
}


void TicTacToe::clear_board()
{
    for (int i = 0; i < pegs.size(); i++)
    {
        if (pegs[i] != " ")
            pegs[i] = " ";
    }
}


bool TicTacToe::check_column_win()
{
    return false;
}


bool TicTacToe::check_row_win()
{   
    return false;
}


bool TicTacToe::check_diagonal_win()
{
    return false;
}


void TicTacToe::set_winner()
{
    if (player == "X")
        winner = "O";
    else
        winner = "X";
}