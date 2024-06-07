#include<stdio.h>

int main(){
    int a,i,n1=0,n2=1,n,sum=0;
    printf("enter the term ypu wants to print out");
    scanf("%d",&n);
 for(i=1;i<n;i++)
 {
     a=n1+n2;
     n1=n2;
     n2=a;
 printf("%d\t ",a);
 sum=sum+a;
 }
 printf("\n the sum is equal to %d",sum);
 return 0;
}
   