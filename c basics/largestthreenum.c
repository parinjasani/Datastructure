#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter the value of a");
    scanf("%d", &a);
    printf("enter the value of b");
    scanf("%d", &b);
    printf("enter the value of c");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("the a is largest number %d", a);
        }
        else
        {
            printf("the c is largest num %d", c);
        }
    }
    else if (b > c)
    {
        printf("the b is largest number %d", b);
    }
    else
    {
        printf("the c is largest number%d", c);
    }
    return 0;
}