#include <iostream>
#include <string.h>
int main(){
    char str[100],strcomp[100];
    int i,j=0;
    std::cout<<"Enter a string: ";
    //gets(str);  You may use this line instead of the fgets() one below
    fgets(str,100,stdin);
    for (i = 0; i < strlen(str); i++){
        // you may if you would like to remove the condition which- also includes white space 'str[i]==32'
        if ((str[i]==32) || ((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))){
            strcomp[j]=str[i];
            j++;
        }
        else{
            continue;
        }
    }
    strcomp[i]='\0';
    std::cout<<"Filtered String containing Alphabets only: "<<strcomp;   
    return 0;
}