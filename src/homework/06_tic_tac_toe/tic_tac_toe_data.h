//h

#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::unique_ptr;

#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H

class TicTacToeData
{
public:
    void save_games(const vector<unique_ptr<TicTacToe>>& games);
    vector<unique_ptr<TicTacToe>> get_games();
};

#endif