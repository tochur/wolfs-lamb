#ifndef BOARD_H
#define BOARD_H


class Board
{
    public:
        Board();
        ~Board();
        void print();
        bool makeMove(int x, int y, int x1, int y1);
    protected:
    private:
        int **fields;
};

#endif // BOARD_H
