#include "MoveChecker.h"
#include<iostream>
using namespace std;

MoveChecker::MoveChecker(Board* board):board(board){
}

MoveChecker::~MoveChecker(){
}

bool MoveChecker::isCorrect(int x, int y, int newX, int newY, int color){
    /****Is a pion on the field ****/
    if(board->getFieldSignature(y,x) == 0){
        cout<<"You did not chose a pion"<<endl;
        return 0;
    }
    /******* is it your turn ***********/
    if( color != board->getFieldSignature(y,x)){
        cout<<"It is not your pion / turn."<<endl;
        return 0;
    }
    /********* Field engaged ***********/
    if(board->fields[newY*8+newX]->getPionSignature() != 0){
        cout<<"Wrong move, you can not take occupied field"<<endl;
        return 0;
    }
    /******** Is it correct move *******/
    if ( board->fields[y*8 + x]->pion->checkMove(newX,newY) ){
        cout<<"Wrong move"<<endl;
        return 0;
    }
    return 1;
}
