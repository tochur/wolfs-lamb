#include "Lamb.h"
#include<iostream>
#include<cmath>

using namespace std;

Lamb::Lamb(int x, int y, int signature):Pion(x,y,signature){
    cout<<"Lamb destructor"<<endl;
}

Lamb::~Lamb(){
    cout<<"Lamb destructor"<<endl;
}

bool Lamb::checkMove(int x, int y){
    cout<<"Lamb coordinates"<<this->x<<this->y<<endl;
    cout<<x<<y<<endl;
    if ( abs(x - this->x) == 1 && abs(y - this->y) == 1 )
        return 0;
    cout<<"Wrong Lamb move"<<endl;
    return 1;
}
