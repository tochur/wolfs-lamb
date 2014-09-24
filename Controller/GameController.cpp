#include "GameController.h"
#include<iostream>
#include<cstdlib>

using namespace std;

GameController::GameController(Board* board, Player** players,int turn):board(board),players(players){}

GameController::~GameController(){}

void GameController::start(){
    do{
        int check;
        do{
            board->print();
            appointTurn(turn);
            getCoordinates();
            check = players[turn]->move(x,y,newX,newY);
        }while(!check);
        system("cls");
        cout<<"NEXT MOVE"<<endl;
    }while(!isGameOver());
    board->print();
}

bool GameController::isGameOver(){
    int y,x,check = 0;
    for(y = 0; y<8;y++){        //there can be use more efficient way of searching lamb - example pointer.
        for(x = 0; x<8 ;x++){
            if(board->getFieldSignature(y,x) == 1){
                check++;
                break;
            }
        }
        if(check > 0)
            break;
    }
    /****** Is Lamb winner? *********/
    if(y == 0){
        cout<<"LAMB WON, CONGRATULATION !!!"<<endl;
        return 1;
    }
    /****** Are wolfs winners? ******/
    int surroundX[] = {x - 1, x - 1, x + 1, x + 1};
    int surroundY[] = {y - 1, y + 1, y + 1, y - 1};
    for(int i = 0; i<4 ; i++){
            if( fieldBelongsToBoard(surroundY[i],surroundX[i])  && isFieldEmpty(surroundY[i],surroundX[i]) )
                    return 0;
    }
    cout<<"WOLFS WON, CONGRATULATION !!!"<<endl;
    return 1;
}

void GameController::getCoordinates(){
    cout<<"Type horizontal coordinate of pawn (x)"<<endl;
    x = getCoordinate();
    cout<<"Type vertical coordinate of pawn (y)"<<endl;
    y = getCoordinate();
    cout<<"Type new horizontal coordinate of pawn (newX)"<<endl;
    newX = getCoordinate();
    cout<<"Type new vertical coordinate of pawn (newY)"<<endl;
    newY = getCoordinate();
}

int GameController::getCoordinate(){
    int x;
    while(1){
        cin>>x;
        x--;
        if(x<8 && x>=0)
            return x;
        cout<<"Wrong Coordinate. It must be between 1-8"<<endl;
    }
}

bool GameController::fieldBelongsToBoard(int y, int x){
    if(x<8 && x>=0 && y<8 && y>0){
        return 1;
    }
    return 0;
}

bool GameController::isFieldEmpty(int y, int x){
    if ( board->getFieldSignature(y,x) == 0 ){
        return 1;
    }
    return 0;
}

void GameController::appointTurn(int& turn){
    turn++;
    turn = turn%2;
    if(turn == 0)
        cout<<endl<<"*** LAMB TURN ***"<<endl;
    else
        cout<<endl<<"*** WOLFS TURN ***"<<endl;
}
