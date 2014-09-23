#ifndef GAME_H
#define GAME_H
#include"Player.h"
#include"GameController.h"
#include"MoveChecker.h"
#include"Board.h"

class Game
{
    public:
        Game();
        ~Game();
        void start();
        bool isGameOver();
    protected:
    private:
        Player* players[2];
        Board* board;
        GameController* gameController;
        MoveChecker* moveChecker;
};

#endif // GAME_H
