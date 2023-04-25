//cpp
#include "tic_tac_toe_data.h"
#include<fstream>

using std::ofstream; using std::ifstream; 
using std::getline;

void TicTacToeData::save_games(const vector<unique_ptr<TicTacToe>>& games)
{
    ofstream outFile;
    outFile.open("saved_games.dat");

    if(outFile.is_open())
    {
        for(auto&game : games)
        {
            for(auto& peg: game->get_pegs())
            {
                outFile<<peg;
            }
            outFile<<game->get_winner();
            outFile<<"\n";
        }
    }
    outFile.close();
}

vector<unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
    vector<unique_ptr<TicTacToe>> games;

    ifstream inFile;
    inFile.open("get_games.dat");
    string line;

    if(inFile.is_open())
    {
        while(getline(inFile, line))
        {
            vector<string> pegs;

            for(size_t i = 0; i < line.size() - 1; i++)
            {
                string ch(1, line[i]);
                pegs.push_back(ch);
            }

            string winner{line[line.size() - 1]};
            unique_ptr<TicTacToe> game;

            if(pegs.size() == 9)
                game = make_unique<TicTacToe3>(pegs, winner);
            else if(pegs.size() == 16)
                game = make_unique<TicTacToe4>(pegs, winner);

            games.push_back(move(game));
        }
        inFile.close();
    }
    return games;
}