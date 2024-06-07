#include<stdio.h>

int main(){
    int n,i,count=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("this is prime number");
    }
    else{
        printf("not a prime number number");
    }
    return 0;
}