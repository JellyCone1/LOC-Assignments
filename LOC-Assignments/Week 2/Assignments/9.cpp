#include <iostream>

int main(){
    const int row = 5;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < row-i; j++){
            std::cout<<" * ";
        }
        std::cout<<"\n";
    }
    return 0;
}