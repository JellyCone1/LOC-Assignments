#include <iostream>
#include <math.h>
using namespace std;

int main(){
    const float PI = 3.14159;
    float radii,diameter,circumference,area;
    cout<<"Enter Radii of the Circle: "<<endl;
    cin>>radii;
    diameter = radii*2;
    area = PI*pow(radii,2);
    circumference = 2*PI*radii;
    cout<<"Diameter of the Circle: "<<diameter<<endl;
    cout<<"Circumference of the Circle: "<<circumference<<endl;
    cout<<"Area of the Circle: "<<area<<endl;
    return 0;
}