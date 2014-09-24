#include<iostream>
#include<cstdlib>
#include"Board.h"
#include"Field.h"
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

void Board::print(){
	//system ("cls");
	int i = 56;
	int y = 8;
	cout<<(char)170<<(char)170;
	for(int i = 1;i<9; i++){
        cout<<i;
	}
	cout<<endl<<(char)170<<(char)170;
	for(int i = 1;i<9; i++){
        cout<<(char)196;
	}
	cout<<endl;
	while(i>=0){
        cout<<y<<(char)179;
		for(int j = 0;j<8;j++){
			cout<<fields[i+j]->getFieldAppearance();
		}
        cout<<(char)179;
		cout<<y<<endl;
		i-=8;
        y--;
	}
	cout<<(char)170<<(char)170;
	for(int i = 1;i<9; i++){
        cout<<(char)196;
	}
    cout<<endl<<(char)170<<(char)170;
	for(int i = 1;i<9; i++){
        cout<<i;
	}
	cout<<endl;
}

void Board::changeView(int x, int y, int newX, int newY){
    int oldSignature = fields[y*8 + x]->getPionSignature();
    fields[newY * 8 + newX]->setPionSignature(oldSignature);
    fields[y*8 + x]->setPionSignature(0);
    fields[newY * 8 + newX]->setFieldAppearance(fields[y*8+x]->getFieldAppearance());
    fields[y*8 + x] ->setFieldAppearance(170);
}

int Board::getFieldSignature(int y,int x){
        return fields[y * 8 + x]->getPionSignature();
}
