#ifndef CONTROLLER_H
#define CONTROLLER_H
#include"Board.h"

class Controller
{
    public:
        Controller();
        ~Controller();
        void nextMove();
    protected:
    private:
        Board board;
        int x, y, newX, newY;
        void getMove();
        int getCoordinate();
};

#endif // CONTROLLER_H
