#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int num;
    int sum = 0;
    cout<<"Enter a Number: "<<endl;
    cin>>num;
    do{
        int r = num%10;
        sum+=r;
        num/=10;
    }while(num>0);
    cout<<"Sum of Digits: "<<sum<<endl;
    return 0;
}