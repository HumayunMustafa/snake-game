#ifndef FRAME_H
#define FRAME_H

#define UNUSED_FUNCTION __attribute__((unused))

class frame
{
protected:
    const int ROWS=10;
    const int COLS=10;

public:
    void loadFrame() UNUSED_FUNCTION;
    void printFrame() UNUSED_FUNCTION; 
};


#endif