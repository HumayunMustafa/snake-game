#ifndef SNAKE_H
#define SNAKE_H

#define NOT_IMPLEMENTED __attribute__((unused))
#include <vector>

class snake{
    protected:
        int headX {};
        int headY {};
        int foodX {};
        int foodY {};
        std::vector<int> bodyX;
        std::vector<int> bodyY;
        const char head='O';
        const char body='o';
        int size=1;
        enum class food{
            FOODA=0, FOODB=1, FOODC=2
        };
    public:
        snake(int x,int y) :headX{x},headY{y} {}
        void snake_extend(bool value) NOT_IMPLEMENTED;
};

#endif