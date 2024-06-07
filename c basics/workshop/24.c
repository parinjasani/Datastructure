#include<stdio.h>

int main(){
    int i,a[5],sum=0;
    for(i=0;i<=4;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
      for(i=0;i<=4;i++)
    {
        printf("a[%d] %d \n",i,a[i]);
        sum=sum+a[i];
    }
    printf("the sum of all marks is %d",sum);
    return 0;
}