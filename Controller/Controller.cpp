#include "Controller.h"
#include <iostream>

using namespace std;

Controller::Controller(){
}

Controller::~Controller(){}

void Controller::getMove(){
    cout<<"*** NEXT MOVE ***"<<endl;
    cout<<"Podaj wspolrzedna pionka (x)"<<endl;
    cin>>this->x;
    cout<<"Podaj wspolrzedna pionka (y)"<<endl;
    cin>>this->y;
    cout<<"Podaj wspolrzedna pionka (newX)"<<endl;
    cin>>this->newX;
    cout<<"Podaj wspolrzedna pionka (newY)"<<endl;
    cin>>this->newY;

}

void Controller::nextMove(){
    int check;
    do{
        board.print();
        getMove();
        check = board.makeMove(x,y,newX,newY);
    }while(!check);
}

