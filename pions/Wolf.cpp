#include "Wolf.h"
#include "Field.h"
#include<iostream>

using namespace std;

Wolf::Wolf(int x, int y, int signature):Pion(x,y,signature){
}

Wolf::~Wolf(){
}

bool Wolf::checkMove(int x, int y){
    if( y - this->y == 1 && (x-this->x == 1 || this->x - x == 1) )
            return 0;
    cout<<"Wolfs cannot move this way !!!"<<endl;
    return 1;
}
