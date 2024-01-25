#ifndef LOGIC_H
#define LOGIC_H
#include "board.h"

class Logic : public Board{
    private:
        bool gameOver;
    public:
        Logic() : gameOver{true} {}
        void gameBegin() NOT_IMPLEMENTED;
        void checkGameOver() NOT_IMPLEMENTED;
};

#endif
