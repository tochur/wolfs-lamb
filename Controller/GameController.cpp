#include "GameController.h"
#include<iostream>
using namespace std;

GameController::GameController(Board* board, Player** players,int turn):board(board),players(players){
    //ctor
}

GameController::~GameController(){
    //dtor
}

void GameController::start(){
    do{
            turn++;
            turn = turn%2;
            int check;
            do{
                board->print();
                getCoordinates();
                check = players[turn]->move(x,y,newX,newY);
            }while(check);
    }while(!isGameOver());
}

bool GameController::isGameOver(){
    return 0;
}

void GameController::getCoordinates(){
    cout<<"*** NEXT MOVE ***"<<endl;
    cout<<"Type coordinate of pawn (x)"<<endl;
    x = getCoordinate();
    cout<<"Type coordinate of pawn (y)"<<endl;
    y = getCoordinate();
    cout<<"Type coordinate of pawn (newX)"<<endl;
    newX = getCoordinate();
    cout<<"Type coordinate of pawn (newY)"<<endl;
    newY = getCoordinate();
}

int GameController::getCoordinate(){
    int x;
    while(1){
        cin>>x;
        if(x<8 && x>=0)
            return x;
        cout<<"Wrong Coordinate. It must be between 0-7"<<endl;
    }
}
