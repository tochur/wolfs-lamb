#ifndef FIELD_H
#define FIELD_H
#include"Pion.h"

class Board;
class Wolf;
class Lamb;
class Field{
    public:
        Field(int nrPola);
        virtual ~Field();
        int getPionSignature();
        void setPionSignature(int signature);
    protected:
    private:
        Pion *pion;
        int x, y;
        bool color;
        int signature;
        int fitPion(int i);
    friend Board;
    friend Wolf;
    friend Lamb;
};
#endif // FIELD_H
