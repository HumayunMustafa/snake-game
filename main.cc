#include <iostream>

#define ROWS 10
#define COLS 10

void displayWindow(){
    system("CLS");
    for(int i=0; i< ROWS; i++){
        std::cout<<"#"<<std::endl;
    }
    for(int i=0;i<ROWS;i++){
        std::cout<<"#";
        for(int j=0;j<COLS;j++){
            std::cout<<"";
        }
        std::cout<<"#"<<std::endl;
    }
    for(int i=0; i<ROWS; i++){
        std::cout<<"#";
    }
    
}

int main(){
    while (true)
    {
        displayWindow();
    }
    
    return 0;
}