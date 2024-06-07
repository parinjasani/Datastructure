#include<stdio.h>
int fact(int n)
{
    if(n==1)
    return 1;
    else
    return (n*fact(n-1));
}


int main(){
    int n,i;
    printf("enter the number");
    scanf("%d",&n);
   i= fact(n);
   printf("the fectorial value is = %d",i);
    return 0;
}