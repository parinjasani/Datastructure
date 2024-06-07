#include<stdio.h>

int main(){
    
    int i,j,n;
    printf("enter the number ");
    scanf("%d",&n);
    for(i=5;i>=0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
    printf("\n");
    }
    
    
    
    return 0;
}