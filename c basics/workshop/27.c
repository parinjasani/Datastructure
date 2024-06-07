#include<stdio.h>
int max(int a,int b,int c)
{
   int m=0;
    if(a>b)
    {
        if(a>c)
        {
          m=a;

        }
        else
        {
          m=c;
        }
    }
    else if (b>c)
    {
       m=b;
    }
    else{
        m=c;
    }

   return m; 

}

int main(){
    int x,y,z,i;
     printf("enter the three number");
    scanf("%d %d %d",&x,&y,&z);
    i=max(x,y,z);
    printf("%d is maximum number ",i);
    
    return 0;
}