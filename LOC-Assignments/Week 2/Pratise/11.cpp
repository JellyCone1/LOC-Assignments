#include <iostream>
#include <cmath>

int digitcount(int num,int sum,int dig);
int addingforarmstrong(int r,int num,int sum,int dig);
void armstrongcheck(int sum, int num){
    if (sum==num){
        std::cout<<"IT IS an Armstrong Number";
    }
    else{
        std::cout<<"IT IS NOT an Armstrong Number.";
    }
}

int main(){
    int sum=0,r,num,dig=0,dc;
    std::cout<<"Enter number to check whether its an Armstrong/Narcissistic number or not: \n";
    std::cin>>num;

    dc = digitcount(num,sum,dig);
    sum = addingforarmstrong(r,num,sum,dc);
    armstrongcheck(sum,num);
    return 0;
}

int digitcount(int num,int sum,int dig){
    while(num!=0){
        num/=10;
        dig+=1;
    }
    return dig;
}

int addingforarmstrong(int r,int num,int sum,int dc){
    for (int i=0;i<dc;i++){
        r=num%10;
        sum+=pow(r,dc);
        num/=10;
    }
    return sum;
}