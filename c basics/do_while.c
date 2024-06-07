#include<stdio.h>

int main(){
    int i=1,n;
    printf("enter the value of n");
    scanf("%d",&n);
    do{
        printf("the vlaue is i %d\n",i);
        i++;
    }while(i<=n);
    return 0;
}