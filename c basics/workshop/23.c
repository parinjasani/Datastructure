#include<stdio.h>

int main(){
     int i,j,n;
    printf("enter the number ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
       if((i&1)==0) 
       {
             for(j=i;j>=1;j--)
             {
                 printf("%d",j);
             }
           
       }
       else 
       {
           for(j=1;j<=i;j++)
           {
               printf("%d",j);
           }
       }  
    printf("\n");
    }
    return 0;
}