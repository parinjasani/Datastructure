#include <stdio.h>

int main()
{

    float tax, income;
    do{
    printf("enter the income of yours\n");
    scanf("%f", &income);
    if (income >= 250000 && income < 500000)
    {
        tax = (0.05) * (income - 250000);
    }

    else if (income >= 500000 && income < 1000000)
    {
        tax = tax + (0.2) * (income - 500000);
    }

    else if (income >= 1000000)
    {
        tax = tax + (0.3) * (income - 1000000);
    }
    else
    {
        printf("your velue is under 250000 rupees so no text\n");
    }
    printf("\nyou have must paid text %f\n ", tax);
    }while (income!=0);
    
    
    return 0;
}