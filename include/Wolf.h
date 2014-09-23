#ifndef WOLF_H
#define WOLF_H

#include <Pion.h>
using namespace std;

class Wolf : public Pion{
    public:
        Wolf(int x,int y,int signature = 2);
        virtual ~Wolf();
        bool checkMove(int x, int y);
    protected:
    private:
};

#endif // WOLF_H
