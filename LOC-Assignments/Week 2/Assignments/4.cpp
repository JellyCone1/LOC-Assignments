#include <iostream>

int main(){
    const int row = 5;
    int count=1;
    for (int i = 0; i < row; i++){
        for (int j = 0; j <= i; j++){
            std::cout<<count<<" ";
            count++;
        }
        std::cout<<"\n";
    }
    return 0;
}