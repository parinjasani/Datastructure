#include<stdio.h>
int main()
{
    int stu[10][10];
    for (int  i = 1; i <= 6; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            printf("enter the marks student%d",i);
            scanf("%d",&stu[i][j]);
        }
    
    }
    for (int  i = 1; i <= 6; i++)
    {
        float sum=0;
        printf("\n%d student marks is ",i);
        for (int j = 1; j < 4; j++)
        {
            printf("%d\t",stu[i][j]);
            sum = sum + stu[i][j];
        }
        printf("\n%d student avg marks is %.2f",i,sum/3);
    
    }
    return 0;
}