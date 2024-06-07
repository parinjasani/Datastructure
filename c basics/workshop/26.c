#include<stdio.h>
int fact(int no)
{
    int ans=1;
    for( int i=1;i<=no;i++)
    {
        ans*=i;
    }
    return ans;
}
int main(){
   int no;
   printf("enter the number ");
   scanf("%d",&no);
   printf("the factorial value is %d",fact(no));
    return 0;
}