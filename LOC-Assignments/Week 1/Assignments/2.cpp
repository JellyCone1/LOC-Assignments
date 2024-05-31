#include <iostream>

using namespace std;

int main(){
    int num;
    cout<<"Enter a Number:"<<endl;
    cin>>num;
    if(num==0){
        cout<<"Inputted Number is Zero";
    }
    else if(num>0){
        cout<<"Inputted Number is Positive";
    }
    else{
        cout<<"Inputted Number is Negative";
    }
    return 0;
}