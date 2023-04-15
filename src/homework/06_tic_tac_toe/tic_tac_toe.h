//h
#include<iostream>
#include<string>
#include<vector>
#include<memory>

using std::string; using std::vector;
using std::ostream; using std::istream;
using std::make_unique;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
friend ostream& operator<<(ostream& out, const TicTacToe& game);
friend istream& operator>>(istream& in, TicTacToe& game);

public:
    TicTacToe(int size) : pegs(size*size, " "){};
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const {return player;}
    string get_winner() const {return winner;}

protected:
    vector<string> pegs;
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();

private:
    void set_next_player();
    bool check_board_full();
    void clear_board();
    string player;
    void set_winner();
    string winner;
};

#endif