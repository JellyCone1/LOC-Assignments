/*
Conditions for being a leap year:
1. It must be divisible by 4
2. If a year is divisible by 100, it is not a leap year
3. If a year is divisible by 100 and also by 400, IT IS a leap year
*/

#include <iostream>

using namespace std;

int main(){
    int year;
    cout<<"Enter Year: "<<endl;
    cin>>year;
    if((year%100==0)&&(year%400==0)&&(year%4==0)){
        cout<<"It IS a leap year";
    }
    else if(year%100==0){
        cout<<"It is NOT a leap year";
    }
    else if(year%4==0){
        cout<<"It is a leap year";
    }
    else{
        cout<<"It is NOT a leap year";
    }
    return 0;
}