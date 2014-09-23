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
        int x, y, newX, newY;
        int turn;
        Board* board;
        Player** players;
        bool isGameOver();
        bool nextMove();
        bool fieldBelongsToBoard(int y, int x);
        bool isFieldEmpty(int y, int x);
        void getCoordinates();
        int getCoordinate();
};

#endif // GAMECONTROLLER_H
