#ifndef BOARD_H
#define BOARD_H
#include"Field.h"

class Player;
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
    friend Player;
};

#endif // BOARD_H
