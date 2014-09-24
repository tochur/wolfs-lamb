#include"Field.h"
#include"Wolf.h"
#include"Lamb.h"
#include<iostream>

using namespace std;

Field::Field(int nrPola){
    signature = fitPion(nrPola);
    appearance = fitAppearance(nrPola);
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
    if(nrPola == 59) //daj mo¿liwoœæ wyboru pola startowego
        return 1;
    return 0;
}

 int Field::getPionSignature(){
        return signature;
 }

 void Field::setPionSignature(int signature){
    this->signature = signature;
 }

 char Field::fitAppearance(int nrPola){
    if(nrPola == 0 || nrPola == 2 || nrPola == 4 || nrPola == 6)
        return 2;
    if(nrPola == 59) //daj mo¿liwoœæ wyboru pola startowego
        return 237;
    int x = nrPola%8;
    int y = (nrPola-x)/8;
    if(x%2 == y%2)
        return 170;
    return 219;
 }

 char Field::getFieldAppearance(){
    return appearance;
 }

 void Field::setFieldAppearance(char symbol){
    appearance = symbol;
 }

