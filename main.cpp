#include"Controller.h"
#include <iostream>

using namespace std;

int main()
{
    cout<<"**** WOLFS & LAMB ****"<<endl;
    cout<<"Board"<<endl;
    Controller controller;
    while(1)
        controller.nextMove();
}
