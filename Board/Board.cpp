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
bool Board::makeMove(int x, int y, int x1, int y1){
    if ( fields[y*8+x]->pion->makeMove(x1,y1,fields) )
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
	system ("cls");
	int i = 56;
	while(i>=0){
		for(int j = 0;j<8;j++){
			cout<<fields[i+j]->getPionSignature();
		}
		cout<<endl;
		i-=8;
	}
}
