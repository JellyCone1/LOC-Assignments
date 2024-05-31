#include <iostream>

using namespace std;

int main(){
    char op;
    float num1,num2,result;
    cout<<"Enter 2 Numbers to do Binary Operation: "<<endl;
    cin>>num1>>num2;
    cout<<"What would you like to do with these 2 numbers?: '+','-','/','*'"<<endl;
    cin>>op;
    switch (op)
    {
    case '+':
        result = num1+num2;
        cout<<num1<<" + "<<num2<<" = "<< result;
        break;
    case '-':
        result=num1-num2;
        cout<<num1<<" - "<<num2<<" = "<< result;
        break;
    case '/':
        result=num1/num2;
        cout<<num1<<" / "<<num2<<" = "<< result;
        break;
    case '*':
        result=num1*num2;
        cout<<num1<<" x "<<num2<<" = "<< result;
        break;
    default:
        cout<<"Invalid Operator";
        break;
    }
}