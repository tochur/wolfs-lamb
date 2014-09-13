#include "Lamb.h"
#include<iostream>

using namespace std;

Lamb::Lamb(int x, int y, int signature):Pion(x,y,signature){
    cout<<"Lamb destructor"<<endl;
}

Lamb::~Lamb(){
    cout<<"Lamb destructor"<<endl;
}

bool Lamb::checkMove(int x, int y, const Field** &board){
    return 0;
}
