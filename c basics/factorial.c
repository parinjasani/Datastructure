#include<stdio.h>

int main(){
    int i=1,n;
    do{
    int   factorial=1;
    printf("\nplz enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        factorial= factorial * i;
        
    }
    printf("\nthe factorial value is %d",factorial);
    }while(n!=0);
    return 0;
}