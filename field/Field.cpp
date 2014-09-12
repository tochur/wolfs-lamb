#include "Field.h"

using namespace std;

Field::Field(int nrPola){
    pion = fitPion(nrPola);
    x = nrPola%8;
	y = (nrPola-x)/8;
	color = (x == y || ((x%2 == 0) == (y%2 == 0)));
}

Field::~Field(){
    //Trzeba dopisaæ, jak uzupe³nie siê PION*
}

int Field::fitPion(int nrPola){
    if(nrPola == 0 || nrPola == 2 || nrPola == 4 || nrPola == 6)
        return 1;
    if(nrPola == 59) //daj mo¿liwoœæ wyboru pola startowego
        return 2;
    return 0;
}

 int Field::getPionSymbol(){
        return pion;
 }
