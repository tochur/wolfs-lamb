#ifndef PION_H
#define PION_H

class Field;
class Pion{
    public:
        Pion(int x, int y, int signature = 0);
        virtual ~Pion();
        virtual bool checkMove(int x, int y, const Field** &board) = 0;
        virtual bool makeMove(int x, int y, Field** &board) = 0;
        int getSignature();
    protected:
        int x, y;
        int signature;
    private:

};
#endif // PION_H
