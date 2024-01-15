#include <iostream>

#define ROWS 10
#define COLS 10

void displayWindow(){
    for(int i=0; i< ROWS; i++){
        std::cout<<"#"<<std::endl;
    }
    for(int i=0;i<ROWS;i++){
        std::cout<<"#"<<std::endl;
        for(int j=0;j<COLS;j++){
            std::cout<<""<<std::endl;
        }
        std::cout<<"#"<<std::endl;
    }
    for(int i=0; i<ROWS; i++){
        std::cout<<"#"<<std::endl;
    }
    system(0);
}

int main(){
    while (getline()!="x")
    {
        displayWindow();
    }
    
    return 0;
}