#include "snake.h"
#include "frame.h"
 

class logic: public snake, public frame{
    protected:
        bool gameOverCheck=false, extend=false;
        int score=0;
    public:
        void gameOver() NOT_IMPLEMENTED;
        void refresh() NOT_IMPLEMENTED;
};