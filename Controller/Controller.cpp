#include "Controller.h"
#include <iostream>

using namespace std;

Controller::Controller(){
}

Controller::~Controller(){}

void Controller::getMove(){
    cout<<"*** NEXT MOVE ***"<<endl;
    cout<<"Podaj wspolrzedna pionka (x)"<<endl;
    x = getCoordinate();
    cout<<"Podaj wspolrzedna pionka (y)"<<endl;
    y = getCoordinate();
    cout<<"Podaj wspolrzedna pionka (newX)"<<endl;
    newX = getCoordinate();
    cout<<"Podaj wspolrzedna pionka (newY)"<<endl;
    newY = getCoordinate();

}

void Controller::nextMove(){
    int check;
    do{
        board.print();
        getMove();
        check = board.makeMove(x,y,newX,newY);
    }while(!check);
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
