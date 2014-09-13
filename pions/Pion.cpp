#include "Pion.h"
#include "Field.h"
#include <iostream>

using namespace std;

Pion::Pion(int x, int y, int signature):x(x), y(y), signature(signature){}

Pion::~Pion(){}

int Pion::getSignature(){
    return signature;
}

bool Pion::makeMove(int x, int y, Field** &board){
    cout<<"Pion::makeMove()"<<endl;
    if( checkMove(x, y, (const Field**&)board) )
        return 1;
    int fieldNo = this->y*8 + this->x;
    int newFieldNo = y*8 + x;

    board[newFieldNo]->pion = board[fieldNo]->pion;
    board[fieldNo]->pion = 0;
    return 0;
}
