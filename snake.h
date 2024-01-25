#ifndef SNAKE_H
#define SNAKE_H
#include <vector>
#include <cstdlib>

class Snake{
    protected:
        const char head='O';
        const char body='o';
        int extend;
        std::vector<int> bodyX;
        std::vector<int> bodyY;
        int headX;
        int headY;
        const char food='f';
        int foodX,foodY;
    public:
        Snake() :extend{false} {}
        void growSnake() NOT_IMPLEMENTED;
        bool checkSnake() NOT_IMPLEMENTED;
};

#endif