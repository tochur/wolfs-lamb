#ifndef FIELD_H
#define FIELD_H
#include"Pion.h"

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
        bool color;
        int signature;
        int fitPion(int i);

};
#endif // FIELD_H
