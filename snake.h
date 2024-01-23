#ifndef SNAKE_H
#define SNAKE_H

#define NOT_IMPLEMENTED __attribute__((unused))
#include <vector>
#include <cstdlib>

class snake{
    protected:
        int headX;
        int headY;
        int foodX;
        int foodY;
        std::vector<int> bodyX;
        std::vector<int> bodyY;
        const char head='O';
        const char body='o';
        int size=1;
        const char food='f';
    public:
        snake(int rows) : headX{rand()%rows}, headY{rand() % rows}, foodX{10},foodY{10} {}
        void snake_extend(bool value) NOT_IMPLEMENTED;
};

#endif