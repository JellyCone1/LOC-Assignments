#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float a1,a2,a3;
    cout<<"Enter angles of a triangle: ";
    cin>>a1>>a2>>a3;
    if(abs(a1+a2+a3)>180){
        cout<<"Angles of the traingle exceeds 180 degrees, it is not a valid triangle";
    }
    else if(abs(a1+a2+a3)<180){
        cout<<"Sum of angles is less than 180 degrees, it is not a valid triangle";
    }
    else{
        cout<<"It is a valid triangle";
    }
    return 0;
}