#include "logic.h"
#include <iostream>

void Logic::gameBegin(){
    do{
        checkGameOver();
        printBoard();
        move();
        growSnake(ROWS,COLS);
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
            for(int k=0; k<bodyX.size();k++){
                if(bodyX[k]==i && bodyY[k]==j) {std::cout<<body; j++;}
            }
            if(foodX==i && foodY==j) std::cout<<food;
            else std::cout<<' ';
        }
        std::cout<<"#"<<std::endl;
    }
    for(int i=0; i<COLS+2;i++) std::cout<<"#";
    std::cout<<std::endl;
    std::cout<<tempX<<tempY<<std::endl;
    std::cout<<headX<<headY<<std::endl;
}

void Snake::growSnake(int r,int c){
    if(headX==foodX && headY==foodY) {
        bodyX.push_back(tempX);
        bodyY.push_back(tempY);
        extend=true;
        foodX=rand() % r;
        foodY=rand()%c;
    }
}

bool Snake::checkSnake(){
    for(int i=0; i<bodyX.size() ;i++){
        if(headX==bodyX[i] && headY==bodyY[i]) return false;
    } 
    return true;
}

void Snake::move(){
    tempX=headX, tempY=headY;
    input=getchar();
    if(input!='\n'){
        switch (input)
        {
        case 'w':
            headX--;
            break;
        case 's':
            headX++;
            break;
        case 'a':
            headY--;
            break;
        case 'd':
            headY++;
            break;
        default:
            break;
        }
        prevInput=input;
        for(int l=0; l< bodyX.size();l++){
            int tempx2=bodyX[l],tempy2=bodyY[l];
            bodyX[l]=tempX;
            bodyY[l]=tempY;
            tempX=tempx2;
            tempY=tempy2;
        }
    }
}

void Logic::checkGameOver(){
    if(headX ==-1 || headY ==-1 || headX==ROWS || headY==COLS) gameOver=false;
}