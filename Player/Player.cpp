#include "Player.h"
#include"MoveChecker.h"
#include<iostream>
using namespace std;

Player::Player(int color,MoveChecker* moveChecker,Board* board):color(color),moveChecker(moveChecker),board(board){
    cout<<"Player constructor"<<endl;
}

Player::~Player(){
}

bool Player::move(int x, int y, int newX, int newY){
    cout<<"Move player"<<endl;
    if( moveChecker->isCorrect(x,y,newX,newY,color) ){
        cout<<"Correct Move"<<endl;
        board->changeView(x,y,newX,newY);
        board->fields[y*8 + x]->pion->makeMove(newX,newY,board->fields);
        return 1;       //Zmiana na planszy
    }
    cout<<"Incorrect move"<<endl;
    return 0;
}