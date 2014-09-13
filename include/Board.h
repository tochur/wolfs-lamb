#ifndef BOARD_H
#define BOARD_H
#include"Field.h"

class Board
{
    public:
        Board();
        ~Board();
        void print();
        bool makeMove(int x, int y, int x1, int y1);
    protected:
    private:
        Field **fields;
        void changeView(int x, int y, int x1, int y1);
};

#endif // BOARD_H
