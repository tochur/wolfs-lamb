#include "Wolf.h"
#include "Field.h"

Wolf::Wolf(int x, int y, int signature):Pion(x,y,signature){}

Wolf::~Wolf(){}

bool Wolf::makeMove(int x, int y, Field** &board){
    if( checkMove(x, y, (const Field**&)board) )
        return 1;
    int fieldNo = this->y*8 + this->x;
    int newFieldNo = y*8 + x;

    board[newFieldNo]->pion = board[fieldNo]->pion;
    board[fieldNo]->pion = 0;
    return 0;
}

bool Wolf::checkMove(int x, int y, const Field** &board){
    return 0;
}
