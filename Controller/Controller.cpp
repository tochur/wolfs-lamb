#include "Controller.h"
#include <iostream>

using namespace std;

Controller::Controller(){
}

Controller::~Controller(){}

void Controller::getMove(){
    cout<<"Podaj wsp�rz�dn� pionka (x)"<<endl;
    cin>>this->x;
    cout<<"Podaj wsp�rz�dn� pionka (y)"<<endl;
    cin>>this->y;
    cout<<"Podaj wsp�rz�dn� pionka (newX)"<<endl;
    cin>>this->newX;
    cout<<"Podaj wsp�rz�dn� pionka (newY)"<<endl;
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

