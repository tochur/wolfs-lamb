#include "Wolf.h"
#include "Field.h"
#include<iostream>

using namespace std;

Wolf::Wolf(int x, int y, int signature):Pion(x,y,signature){
    cout<<"Wolf construktor"<<endl;
}

Wolf::~Wolf(){
    cout<<"Wolf destructor"<<endl;
}

bool Wolf::checkMove(int x, int y, const Field** &board){
    return 0;
}
