#include <iostream>

int main(){
    int arr[3][3];
    int arr1[3][3];
    int sumArr[3][3];
    
    std::cout<<"Enter the elements into 1st 3x3 Matrix: ";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            std::cin>>arr[i][j];
        }
    }
    std::cout<<"Enter the elements into 2nd 3x3 Matrix: ";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            std::cin>>arr1[i][j];
        }
    }
    // Addition
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            sumArr[i][j] = arr[i][j] + arr1[i][j];
        }
    }

    std::cout<<"Sum of these 2 Matrices: "<<'\n';
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            std::cout<<sumArr[i][j]<<"\t";
        }
        std::cout<<'\n';
    }

    return 0;
}