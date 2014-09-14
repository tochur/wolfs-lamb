#ifndef BOARD_H
#define BOARD_H
#include"Field.h"

class Board
{
    public:
        Board();
        ~Board();
        void print();
        bool makeMove(int x, int y, int x1, int y1, bool turn);
    protected:
    private:
        Field **fields;
        void changeView(int x, int y, int x1, int y1);
        int checkMove(int x, int y, int newX, int newY, bool turn);
};

#endif // BOARD_H
