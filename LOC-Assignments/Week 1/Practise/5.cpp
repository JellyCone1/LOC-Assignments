#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float l1,l2,l3;
    cout<<"Enter sides of the triangle: ";
    cin>>l1>>l2>>l3;
    if((l1==l2)&&(l1==l3)&&(l2==l3)){
        cout<<"It is an Equilateral Triangle";
    }
    else if((l1==l2)||(l1==l3)||(l2==l3)){
        cout<<"It is an isoceles triangle";
    }
    else{
        cout<<"It is a scalene Triangle";
    }
}