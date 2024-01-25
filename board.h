#ifndef BOARD_H
#define BOARD_H

#define NOT_IMPLEMENTED __attribute__((unused))
#include "snake.h"

class Board:public Snake {
    protected:
        const int ROWS;
        const int COLS;
    public:
        Board() :ROWS{10}, COLS{10} {
            headX={rand()%ROWS};
            headY={rand()%COLS}; 
            foodX=rand()%ROWS;
            foodY=rand()%COLS;
        }
        void printBoard() NOT_IMPLEMENTED;
};

#endif