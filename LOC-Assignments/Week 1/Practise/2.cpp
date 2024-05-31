#include <iostream>

using namespace std;
char grader(int);

int main(){
    int marks;
    cout<<"Enter your Marks:"<<endl;
    cin>>marks;
    if (grader(marks) == 'N'){
        cout<<"Marks Cannot exceed 100";
        exit(1);
    }
    cout<<"Your Grade is: "<<grader(marks); 
}

char grader(int marks){
    if (marks>100){
        return 'N';
    }
    else if (marks>=95 && marks<=100){
        return 'O';
    }
    else if(marks>=90 && marks<95){
        return 'A';
    }
    else if(marks>=80 && marks<90){
        return 'B';
    }
    else if(marks>=70 && marks<80){
        return 'C';
    }
    else if(marks>=60 && marks<70){
        return 'D';
    }
    else{
        return 'L';
    }
    return 'F';
}