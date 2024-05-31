#include <iostream>
#include <unordered_map>
using namespace std;

void mostFrequent(int size,int* arr);

int main(){
    int arr[] = {2,4,2,1,4,5,6,3,1,2,3,3,2,1,1,3,2,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    mostFrequent(size,arr);
    // cout<<"Most occured Number is: "<<endl;
    return 0;
}

void mostFrequent(int size, int* arr){
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
    cout<<"Most Frequent number is: "<<popular<<" With "<<maxCount<<" Instances";
}