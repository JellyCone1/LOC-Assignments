#include <iostream>

int main(){
    int arr[] = {0,1,2,3,4};
    int arr1[] = {5,6,7,8,9};

    int arr_merged[(sizeof(arr)/sizeof(arr[0]))+(sizeof(arr1)/sizeof(arr1[0]))];
    
    // MERGING THE ARRAY
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        arr_merged[i] = arr[i];
    }
    for (int i = sizeof(arr1)/sizeof(arr1[0]); i < sizeof(arr_merged)/sizeof(arr_merged[0]); i++)
    {
        arr_merged[i] = arr1[i-sizeof(arr1)/sizeof(arr1[0])];
    }
    
    //REVERSING THE MERGED ARRAY
    int temp;
    for (int i = 0; i < (sizeof(arr_merged)/sizeof(arr_merged[0]))/2; i++)
    {
        temp = arr_merged[i];
        arr_merged[i] = arr_merged[sizeof(arr_merged)/sizeof(arr_merged[0])-i];
        arr_merged[sizeof(arr_merged)/sizeof(arr_merged[0])-i] = temp;
    }

    // OUTPUT
    std::cout<<"Reversed Merged Array: ";
    for (int i = 1; i <= (sizeof(arr_merged)/sizeof(arr_merged[0])); i++)
    {
        std::cout<<arr_merged[i]<<" ";
    }
    
    return 0;
}