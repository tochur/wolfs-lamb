#include "Pion.h"

using namespace std;

Pion::Pion(int x, int y, int signature):x(x), y(y), signature(signature){}

Pion::~Pion(){}

int Pion::getSignature(){
    return signature;
}
