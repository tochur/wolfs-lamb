#ifndef FIELD_H
#define FIELD_H

class Field{
    public:
        Field(int nrPola);
        virtual ~Field();
        int getPionSymbol();
    protected:
    private:
        //Pion *pion;
        int x, y;
        bool color;
        int pion;
        int fitPion(int i);
};
#endif // FIELD_H
