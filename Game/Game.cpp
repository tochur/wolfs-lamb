#include<iostream>
#include "Game.h"
using namespace std;

Game::Game(){
    cout<<"Game Constructor"<<endl;
    board = new Board();
    moveChecker = new MoveChecker(board);
    players[0] = new Player(1,moveChecker,board);
    players[1] = new Player(2,moveChecker,board);
    gameController = new GameController(board,players);

}

Game::~Game(){
    cout<<"Game Destructor"<<endl;
    delete players[0];
    delete players[1];
    delete board;
    delete gameController;
    delete moveChecker;
}

void Game::start(){
    cout<<"Game::start():"<<endl;
    gameController->start();
}

bool Game::isGameOver(){
    return 0; //Dopisać warunek zakończenia
}
