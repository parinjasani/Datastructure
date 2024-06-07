#include<stdio.h>

int main(){
    int i,n;
    int factorial=1;
    printf("plz enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        factorial*=i;
    }
    printf("the factorial value of %d is %d !",n,factorial);
    return 0;
}
