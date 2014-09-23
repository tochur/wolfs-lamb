#ifndef PLAYER_H
#define PLAYER_H
#include"MoveChecker.h"

class Player
{
    public:
        Player(int color,MoveChecker* moveChecker,Board* board);
        ~Player();
        bool move(int x, int y, int newX, int newY);
    protected:
    private:
        int color;
        Board* board;
        MoveChecker* moveChecker;
};

#endif // PLAYER_H
