#include<stdio.h>
#include<string.h>

int main(){
    char s[20]="nitin";
    char c[50]="kinaar topper";
    strcmp(s,c);
    if(strcmp(s,c)==0 ){
    printf("string are same");}
    else{
    printf("string are diffrent");}
    
    printf("\nthe riverse string are %s",strrev(s));
    
    printf("\nthe combine string are %s",strcat(s,c));
    
    return 0;
}