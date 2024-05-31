#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float length;
    cout<<"Enter length in cm: "<<endl;
    cin>>length;
    cout<<length<<" cm = "<<length*pow(10,-2)<<" meters = "<<length*pow(10,-5)<<" kilometers"<<endl;
    return 0;
}