#include <iostream>

using namespace std;

int main(){
    int arr[5]={23,54,7,26,897};
    cout<<"Elements of the array are: "<<endl;
    for(int element: arr){
        cout<<element<<' ';
    }
    for(int i = 0;i<sizeof(arr)/sizeof(arr[0]-1);i++){
        for(int j=0;j<sizeof(arr)/sizeof(arr[0])-i-1;j++){
            if (arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"\nAfter Sorting:"<<endl;
    for(int element: arr){
        cout<<element<<' ';
    }
    cout<<"\nThe second Largest Element in the array is: "<<arr[3]<<endl;
    return 0;
}