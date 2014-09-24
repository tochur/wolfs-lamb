#include<iostream>
#include "Game.h"
using namespace std;

Game::Game(){
    board = new Board();
    moveChecker = new MoveChecker(board);
    players[0] = new Player(1,moveChecker,board);
    players[1] = new Player(2,moveChecker,board);
    gameController = new GameController(board,players);

}

Game::~Game(){
    delete players[0];
    delete players[1];
    delete board;
    delete gameController;
    delete moveChecker;
}

void Game::start(){
    gameController->start();
}
