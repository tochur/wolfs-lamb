#include "Board.h"
#include<iostream>
#include<cstdlib>

using namespace std;

Board::Board(){
    fields = new int*[64];
	for(int i = 0; i<64;i++){
		fields[i] = new int(i);
	}
}

Board::~Board(){
    for(int i = 0;i<64;i++){
		delete fields[i];
	}
	delete fields;
}
/**********/
bool Board::makeMove(int x, int y, int x1, int y1){	//czy w planczy, czy pionek
	/*Pole *beg = plansza[8*(y)+x];
	Pole *end = plansza[8*(y1)+x1];
	bool z = beg->pion->checkMove(x1,y1,plansza);		//0 jeœli poprawny
	if(!z){
		cout<<"Poprawny ruch "<<z<<endl;
		end->typ= beg->typ;
		beg->typ = 0;

		if(end != 0)
			delete end->pion;
		end->pion = beg->pion;
		beg->pion = 0;

	} */
    cout<<"Not suported yet"<<endl;
	return 1;
}
/**********/
void Board::print(){
	system("clear");
	int i = 56;
	while(i>=0){
		for(int j = 0;j<8;j++){
			cout<<*fields[i+j];
		}
		cout<<endl;
		i-=8;
	}
}

