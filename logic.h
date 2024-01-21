#include "snake.h"
#include "frame.h"

class logic: public snake, public frame{
    protected:
        bool gameOver=false, extend=false;
        int fruit=0;
};