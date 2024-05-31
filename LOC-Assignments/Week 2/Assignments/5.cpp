#include <iostream>

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    
    //copying elements into another new array
    const int size = *(&arr + 1) - arr;
    int newArr[size];

    for (int i = 0; i < size; i++){
        newArr[i] = arr[i];
    }
    for(int element:newArr){
        std::cout<<element<<" ";
    }
    return 0;
}