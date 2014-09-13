#include "Controller.h"
#include <iostream>

using namespace std;

Controller::Controller(){
}

Controller::~Controller(){}

void Controller::getMove(){
    cout<<"Podaj wspó³rzêdn¹ pionka (x)"<<endl;
    cin>>this->x;
    cout<<"Podaj wspó³rzêdn¹ pionka (y)"<<endl;
    cin>>this->y;
    cout<<"Podaj wspó³rzêdn¹ pionka (newX)"<<endl;
    cin>>this->newX;
    cout<<"Podaj wspó³rzêdn¹ pionka (newY)"<<endl;
    cin>>this->newY;

}

void Controller::nextMove(){
    int check;
    do{
        cout<<"Controller::nextMove()"<<endl;
        board.print();
        getMove();
        check = board.makeMove(x,y,newX,newY);
    }while(!check);
}

