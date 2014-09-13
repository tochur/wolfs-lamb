#include "Lamb.h"
#include<iostream>

using namespace std;

Lamb::Lamb(int x, int y, int signature):Pion(x,y,signature){}

Lamb::~Lamb(){
    cout<<"Lamb destructor"<<endl;
}

bool Lamb::makeMove(int x, int y, Field** &board){
    if( checkMove(x, y, (const Field**&)board) )
        return 1;
    int fieldNo = this->y*8 + this->x;
    int newFieldNo = y*8 + x;

    board[newFieldNo] = board[fieldNo];
    board[fieldNo] = 0;
    return 0;
}

bool Lamb::checkMove(int x, int y, const Field** &board){
    return 0;
}
