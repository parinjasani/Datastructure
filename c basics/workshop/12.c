#include<stdio.h>

int main(){
    int a,b,max;
    printf("enter the value a and b");
    scanf("%d %d",&a,&b);
    max=(a>b)?a:b;
printf("maximum number is%d",max);
    return 0;
}