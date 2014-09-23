#include<iostream>
#include"Board.h"
#include"Field.h"
using namespace std;

Board::Board(){
    cout<<"Board Constructor"<<endl;
        fields = new Field*[64];
	for(int i = 0; i<64;i++){
		fields[i] = new Field(i);
	}
}

Board::~Board(){
    cout<<"Board Destructor"<<endl;
    for(int i = 0;i<64;i++){
		delete fields[i];
	}
	delete fields;
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

void Board::changeView(int x, int y, int newX, int newY){
    cout<<"Change View"<<endl;
    int oldSignature = fields[y*8 + x]->getPionSignature();
    fields[newY * 8 + newX]->setPionSignature(oldSignature);
    fields[y*8 + x]->setPionSignature(0);
}
