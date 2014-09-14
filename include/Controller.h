#ifndef CONTROLLER_H
#define CONTROLLER_H
#include"Board.h"

class Controller
{
    public:
        Controller(int turn = 0);
        ~Controller();
        void nextMove();
    protected:
    private:
        Board board;
        int x, y, newX, newY;
        int turn;
        void getMove();
        int getCoordinate();
};

#endif // CONTROLLER_H
