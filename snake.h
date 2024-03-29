#ifndef SNAKE_H
#define SNAKE_H
#include <vector>
#include <cstdlib>

class Snake{
    protected:
        const char head='O';
        const char body='o';
        int input;
        int prevInput='w';
        int extend;
        std::vector<int> bodyX;
        std::vector<int> bodyY;
        int tempX;
        int tempY;
        int headX;
        int headY;
        const char food='f';
        int foodX,foodY;
    public:
        Snake() :extend{false}, tempX{0}, tempY{0} {}
        void growSnake(int r,int c) NOT_IMPLEMENTED;
        bool checkSnake() NOT_IMPLEMENTED;
        void move() NOT_IMPLEMENTED;
};

#endif