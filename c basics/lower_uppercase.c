#include<stdio.h>

int main(){
    char ch;
    printf("plz enter the character");
    scanf("%c",&ch);
    if(ch<=122 && ch>=97){
    printf("enter character is in lower case");
    }
    else 
    {
        printf("it is not lower case");
    }
    return 0;
}