#include "Wolf.h"
#include "Field.h"
#include<iostream>

using namespace std;

Wolf::Wolf(int x, int y, int signature):Pion(x,y,signature){
    cout<<"Wolf constructor"<<endl;
}

Wolf::~Wolf(){
    cout<<"Wolf destructor"<<endl;
}

bool Wolf::checkMove(int x, int y, const Field** &board){
    if( y - this->y == 1 && (x-this->x == 1 || this->x - x == 1) )
            return 0;
    cout<<"Incorrect wolf move"<<endl;
    return 1;
}
