#include<stdio.h>

int main(){
    int i=1,n,sum=0;
    printf("enter the number n\n");
    scanf("%d",&n);

    for(i;i<11;i++)
    {
        printf("%d X%d=%d\n",n,i,n*i);
         sum+=(i*n);

           
    }
    
     printf("the sum is equal to %d\n",sum);
    
       
        
    
      
      
    return 0;

}