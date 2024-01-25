#include "logic.h"
#include <iostream>

void Logic::gameBegin(){
    do{
        checkGameOver();
        if(gameOver && checkSnake()) printBoard();
        else break;
    }
    while(gameOver);
}


void Board::printBoard(){
    system("clear");
    for(int i=0; i< COLS+2;i++) std::cout<<"#";
    std::cout<<std::endl;
    for(int i=0;i<ROWS;i++){
        std::cout<<"#";
        for(int j=0; j<COLS;j++){
            if(headX==i && headY==j) std::cout<<head;
            else if(foodX==i && foodY==j) std::cout<<food;
            else std::cout<<" ";
        }
        std::cout<<"#"<<std::endl;
    }
    for(int i=0; i<COLS+2;i++) std::cout<<"#";
    std::cout<<std::endl;
}

bool Snake::checkSnake(){
    for(int i=0; i<bodyX.size() ;i++){
        if(headX==bodyX[i] && headY==bodyY[i]) return false;
    } 
    return true;
}

void Logic::checkGameOver(){
    if(headX ==-1 || headY ==-1 || headX>ROWS || headY>COLS) gameOver=false;

}