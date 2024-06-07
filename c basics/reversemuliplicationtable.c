#include<stdio.h>

int main(){
    int i=1,n,sum=0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=10;i;i--)
    {
        printf("%dX%d=%d\n",n,i,n*i);
        
    }
    

    return 0;
}