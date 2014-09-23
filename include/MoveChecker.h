#ifndef MOVECHECKER_H
#define MOVECHECKER_H
#include"Board.h"

class MoveChecker
{
    public:
        MoveChecker(Board* board);
        ~MoveChecker();
        bool isCorrect(int x, int y, int newX, int newY,int color);
    protected:
    private:
        Board* board;
};

#endif // MOVECHECKER_H
