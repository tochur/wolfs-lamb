#include "Controller.h"
#include <iostream>

using namespace std;

Controller::Controller(int turn):turn(turn){}

Controller::~Controller(){}

void Controller::getMove(){
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

void Controller::nextMove(){
    int check;
    turn++;
    turn = turn%2;
    do{
        board.print();
        getMove();
        check = board.makeMove(x,y,newX,newY,turn);
    }while(check);
}

int Controller::getCoordinate(){
    int x;
    while(1){
        cin>>x;
        if(x<8 && x>=0)
            return x;
        cout<<"Wrong Coordinate. It must be between 0-7"<<endl;
    }
}
