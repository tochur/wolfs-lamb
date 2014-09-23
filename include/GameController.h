#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H
#include"Board.h"
#include"Player.h"

class GameController
{
    public:
        GameController(Board* board, Player** players,int turn = 1);
        ~GameController();
        void start();
    protected:
    private:
        int x, y, newX, newY, turn;
        Board* board;
        Player** players;
        bool isGameOver();
        bool nextMove();
        void getCoordinates();
        int getCoordinate();
};

#endif // GAMECONTROLLER_H
