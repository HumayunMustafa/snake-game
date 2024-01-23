#include "logic.h"

void logic::refresh(){
    do{
        logic::gameOver();
        printFrame();
    }
    while(!gameOverCheck);
}

void logic::gameOver(){
    if(headX<1 || headY<1 || headX==ROWS-1 || headY==COLS-1){
        gameOverCheck=true;
    }
}