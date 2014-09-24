#include "Lamb.h"
#include<iostream>
#include<cmath>

using namespace std;

Lamb::Lamb(int x, int y, int signature):Pion(x,y,signature){
}

Lamb::~Lamb(){
}

bool Lamb::checkMove(int x, int y){
    if ( abs(x - this->x) == 1 && abs(y - this->y) == 1 )
        return 0;
    cout<<"Lamb cannot move this way !!!"<<endl;
    return 1;
}
