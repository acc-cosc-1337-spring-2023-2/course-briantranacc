//cpp
#include "tic_tac_toe_manager.h"

ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    for (const auto& game : manager.games)
    {
        out<<game<<"\n";
    }
    return out; 
}

void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
}

void TicTacToeManager::get_winner_total(int& o, int& x, int&t)
{
    o = o_win;
    x = x_win;
    t = ties;
}

void TicTacToeManager::update_winner_count(string winner)
{
    if(winner == "X")
        x_win++;
    else if(winner == "O")
        o_win++;
    else
        ties++;
}