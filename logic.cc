#include "logic.h"
#include <iostream>

void Logic::gameBegin(){
    do{
        checkGameOver();
        printBoard();
    }
    while(gameOver && checkSnake());
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

void Snake::growSnake(){
    if(headX==foodX && headY==foodY) {
        bodyX.push_back(headX);
        bodyY.push_back(headY);
    }
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