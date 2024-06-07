#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("ener the value od a");
    scanf("%d", &a);
    printf("ener the value od b");
    scanf("%d", &b);

    printf("enter the value of c");
    scanf("%d", &c);

    printf("enter the value of d");
    scanf("%d", &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("the a is largrst num %d", a);
            }
            else
            {
                printf("the d is larlest num%d", d);
            }
        }
    }
    else if (b > c)
    {
        if (b > d)
        {
            printf("the b is largest num%d", b);
        }
        else
        {
            printf("the d is largest num%d ", d);
        }
    }
    else if (c > d)
    {
        printf("the c is largest number %d", c);
    }
    else
    {
        printf("the d is largest number %d", d);
    }
    return 0;
}