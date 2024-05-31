#include <iostream>
#include <unordered_map>
using namespace std;

int mostFrequent(int size,int* arr);

int main(){
    int arr[] = {5,2,1,6,3,2,1,5,3,6,8,9,5,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Most Frequent Integer is: "<<mostFrequent(size,arr)<<endl;
    return 0;
}

int mostFrequent(int size, int* arr){
    unordered_map<int,int> element;
    for (int i = 0; i < size; i++)
    {
        element[arr[i]]++;
    }
    
    int maxCount = 0;
    int popular = -1;

    for(const auto& entry:element){
        if (entry.second>maxCount){
            maxCount = entry.second;
            popular = entry.first;
        }
    }
    return popular;
}