#ifndef LAMB_H
#define LAMB_H

#include <Pion.h>


class Lamb : public Pion
{
    public:
        Lamb(int x, int y, int signature = 1);
        virtual ~Lamb();
        bool checkMove(int x, int y, const Field** &board);
    protected:
    private:
};

#endif // LAMB_H
