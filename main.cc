#include <iostream>

#define ROWS 10
#define COLS 10

void displayWindow(){
    std::system("clear");
    std::cout<<"#";
    for(int i=0; i< COLS; i++){
        std::cout<<"#";
    }
    std::cout<<"#"<<std::endl;
    for(int i=0;i<ROWS;i++){
        std::cout<<"#";
        for(int j=0;j<COLS;j++){
            std::cout<<" ";
        }
        std::cout<<"#"<<std::endl;
    }
    std::cout<<"#";
    for(int i=0; i<ROWS; i++){
        std::cout<<"#";
    }
    std::cout<<"#"<<std::endl;
    
}

int main(){
    int times=0;
    while (times!=2)
    {
        displayWindow();
        times++;
    }
    
    return 0;
}