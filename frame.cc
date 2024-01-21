#include "frame.h"
#include <iostream>

// This will be the implementation of frame (board or whatever to call it)
void frame::printFrame(){
    std::system("clear");
    for(int i=0;i<ROWS;i++) std::cout<<"#";
    std::cout<<std::endl;
    for(int i=1;i<ROWS-1;i++){
        std::cout<<"#";
        for(int j=1;j<COLS-1;j++){
            std::cout<<" ";
        }
        std::cout<<"#"<<std::endl;
    }
    for(int i=0;i<ROWS;i++) std::cout<<"#";
    std::cout<<std::endl;
}