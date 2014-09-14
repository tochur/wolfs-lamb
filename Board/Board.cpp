#include "Board.h"
#include "Field.h"
#include "Pion.h"
#include<iostream>
#include<cstdlib>

using namespace std;

Board::Board(){
    fields = new Field*[64];
	for(int i = 0; i<64;i++){
		fields[i] = new Field(i);
	}
}

Board::~Board(){
    for(int i = 0;i<64;i++){
		delete fields[i];
	}
	delete fields;
}
/**********/
bool Board::makeMove(int x, int y, int x1, int y1, bool turn){
    if ( checkMove(x,y,x1,y1,turn) || fields[y*8+x]->pion->makeMove(x1,y1,fields) )
        return 1;
    changeView(x,y,x1,y1);
    return 0;
}

void Board::changeView(int x, int y, int newX, int newY){
    Field *oldField = fields[y*8 + x];
    Field *newField = fields[newY*8 + newX];
    int signature = oldField->getPionSignature();
    newField->setPionSignature(signature);
    oldField->setPionSignature(0);
}

void Board::print(){
	//system ("cls");
	int i = 56;
	while(i>=0){
		for(int j = 0;j<8;j++){
			cout<<fields[i+j]->getPionSignature();
		}
		cout<<endl;
		i-=8;
	}
}

int Board::checkMove(int x, int y, int newX, int newY, bool turn){
    int checker = 0;
    //****Is a pion on the field ****//
    if(fields[y*8+x]->getPionSignature() == 0){
        cout<<"You didn't chose a pion"<<endl;
        return ++checker;
    }
        //****Is it your turn***//
    switch(turn){
    case 0: //wolf
        if (fields[y*8+x]->getPionSignature() != 2){
            cout<<"It is not your turn"<<endl;
            return ++checker;
        }
        break;
    case 1: //lamb
         if (fields[y*8+x]->getPionSignature() != 1){
            cout<<"It is not your turn"<<endl;
            return ++checker;
        }
    }
    //****Field engaged***//
    if(fields[newY*8+newX]->getPionSignature() != 0){
        cout<<"Wrong move, you can not take occupied field"<<endl;
        return ++checker;
    }
    return checker;
}
