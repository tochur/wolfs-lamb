#ifndef FIELD_H
#define FIELD_H
#include"Pion.h"

class Board;
class Field{
    public:
        Field(int nrPola);
        virtual ~Field();
        int getPionSignature();
        void setPionSignature(int signature);
        Pion *pion;
    protected:
    private:
        int x, y;
        char appearance;
        bool color;
        int signature;
        int fitPion(int i);
        char fitAppearance(int nrPola);
        char getFieldAppearance();
        void setFieldAppearance(char symbol);
    friend Board;
};
#endif // FIELD_H
