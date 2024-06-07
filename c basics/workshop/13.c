#include<stdio.h>

int main(){
    int a,b;
    printf("enter the value of a and b\n");
    scanf("%d %d",&a,&b);
    printf("the value before swaping %d and %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n the value after swaping id %d %d",a,b);
    return 0;
}