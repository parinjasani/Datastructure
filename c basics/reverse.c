#include<stdio.h>


int main(){

    int a;
    int rem=0,rev=0;
    printf("enter the number");
    scanf("%d",&a);
    do
    {
     rem=a%10;
     rev=rev*10+rem;
     a=a/10;

    }while(a>0);
    printf("the revrse number is equal to %d\n",rev);
 
    return 0;
}