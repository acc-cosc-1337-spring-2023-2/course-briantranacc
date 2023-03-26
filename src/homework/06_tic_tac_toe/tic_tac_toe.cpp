//cpp
#include "tic_tac_toe.h"

using std::cout; using std::cin;

void TicTacToe::start_game(string first_player)
{
    while (first_player != "X" && first_player != "O")
    {
        cout<<"Enter X or O: ";
        cin>>first_player;
    }

    player = first_player;

    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<pegs[(i * 3) + j];
            
            if (j < 2)
                cout<<"|";
        }
        if(i < 2)
            cout<<"\n";
    }
    cout<<"\n";
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