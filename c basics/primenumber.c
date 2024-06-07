#include<stdio.h>
int main(){
    int min,max,i,j,count;
    printf("enter min nuumber\n ");
    scanf("%d",&min);
    printf("enter the maximunm number \n");
    scanf("%d",&max);
    for(i=min;i<=max;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
      if(count==2)
    {
        printf("prime number between %d and %d is %d\n",min,max,i);
    }
    }
    
    return 0;
}