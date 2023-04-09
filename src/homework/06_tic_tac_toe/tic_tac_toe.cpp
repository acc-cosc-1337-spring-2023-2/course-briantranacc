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
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            out<<game.pegs[(i * 3) + j];
            
            if (j < 2)
                out<<"|";
        }
        if(i < 2)
            out<<"\n";
    }
    out<<"\n";
    return out;
}


istream& operator>>(istream& in, TicTacToe& game)
{
    int position;

    while (true)
	{
		cout<<"Enter position from 1 to 9: ";
		in>>position;

		if (position >=1 && position <=9)  
		{
			break;
		}
        else if(position == 0)
        {
            cout<<"Ending game...\n";
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
    for (int i = 0; i < 9; i++)
    {
        if(pegs[i] == " ")
            return false;
    }
    return true;
}


void TicTacToe::clear_board()
{
    for (int i = 0; i < 9; i++)
    {
        if (pegs[i] != " ")
            pegs[i] = " ";
    }
}


bool TicTacToe::check_column_win()
{
    for (int i = 0; i < 3; i++)
    {
        if (pegs[i] == "X" && pegs[i+3] == "X" && pegs[i+6] == "X")
        {
            return true;
        }
        else if(pegs[i] == "O" && pegs[i+3] == "O" && pegs[i+6] == "O")
        {
            return true;
        }    
    }
    return false;
}


bool TicTacToe::check_row_win()
{   
    for(int i = 0; i < 3; i++)
    {
        int index = i * 3;
        if(pegs[index] == "X" && pegs[index+1] == "X" && pegs[index+2] == "X")
        {
            return true;
        }
        else if(pegs[index] == "O" && pegs[index+1] == "O" && pegs[index+2] == "O")
        {
            return true;
        }
    }
    return false;

}


bool TicTacToe::check_diagonal_win()
{
    if(pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
    {
        return true;
    }
    else if(pegs[6] == "X" && pegs[4] == "X" && pegs[2] == "X")
    {
        return true;
    }
    else if(pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
    {
        return true;
    }
    else if(pegs[6] == "O" && pegs[4] == "O" && pegs[2] == "O")
    {
        return true;
    }
    else
        return false;
}


void TicTacToe::set_winner()
{
    if (player == "X")
    {
        winner = "O";
    }
    else
        winner = "X";
}