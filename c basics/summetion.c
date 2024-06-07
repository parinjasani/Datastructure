#include<stdio.h>

int main(){
    int num,a,b,c,d,sum;
    printf("enter the number plz");
    scanf("%d",&num);
    a=num/100;
    b=num%100;
    c=b%10;
    d=b/10;
    sum=a+c+d;
    printf("the sum is equal to %d",sum);
    
    return 0;
}