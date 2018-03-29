#ifndef TICTACTOEGAME_H
#define TICTACTOEGAME_H
#include<iostream>
#include<string>
class TicTacToeGame
{
    public:
        TicTacToeGame();
        void playthegame();

    private:
        void welcome();
        bool checkwin(char currentplayer);
        bool placemarker(int x ,int y ,char currentplayer);
        int givingxcoord();
        int givingycoord();
        void clearboard();//empty the board
        void printboard();//print the board
        char board[3][3];

};

#endif // TICTACTOEGAME_H
