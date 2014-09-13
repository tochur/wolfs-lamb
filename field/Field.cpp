#include"Field.h"
#include"Wolf.h"
#include"Lamb.h"
#include<iostream>

using namespace std;

Field::Field(int nrPola){
    signature = fitPion(nrPola);
    x = nrPola%8;
	y = (nrPola-x)/8;
	color = (x == y || ((x%2 == 0) == (y%2 == 0)));
	switch(signature){
        case 1:
            pion = new Lamb(x,y);
            break;
        case 2:
            pion = new Wolf(x,y);
            break;
        default:
            pion = 0;
	}
}

Field::~Field(){
    delete pion;
}

int Field::fitPion(int nrPola){
    if(nrPola == 0 || nrPola == 2 || nrPola == 4 || nrPola == 6)
        return 2;
    if(nrPola == 59) //daj mo�liwo�� wyboru pola startowego
        return 1;
    return 0;
}

 int Field::getPionSignature(){
        return signature;
 }

 void Field::setPionSignature(int signature){
    this->signature = signature;
 }

