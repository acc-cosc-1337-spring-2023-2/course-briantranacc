//h
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include<memory>

using std::unique_ptr; using std::move;

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{
friend ostream& operator<<(ostream& out, const TicTacToeManager& manager);

public:
    TicTacToeManager() = default;
    TicTacToeManager(TicTacToeData& data);
    void save_game(unique_ptr<TicTacToe>& b);
    void get_winner_total(int& o, int& x, int& t);
    ~TicTacToeManager();

private:
    vector<unique_ptr<TicTacToe>> games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;
    void update_winner_count(string winner);
    TicTacToeData data;
};

#endif