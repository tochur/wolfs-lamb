#include "Player.h"
#include"MoveChecker.h"
#include<iostream>
using namespace std;

Player::Player(int color,MoveChecker* moveChecker,Board* board):color(color),moveChecker(moveChecker),board(board){
}

Player::~Player(){
}

bool Player::move(int x, int y, int newX, int newY){
    if( moveChecker->isCorrect(x,y,newX,newY,color) ){
        board->changeView(x,y,newX,newY);
        board->fields[y*8 + x]->pion->makeMove(newX,newY,board->fields);
        return 1;       //Zmiana na planszy
    }
    cout<<"Incorrect move, it can not move this way !!!"<<endl;
    return 0;
}
