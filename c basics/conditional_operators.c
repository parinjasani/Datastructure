#include <stdio.h>

int main()
{
    int age;
    printf("enter the age");
    scanf("%d", &age);
    // one liner if statement
    (age >= 18 && age <= 70) ? printf("you can drive ") : printf("you can not drive");
    return 0;
}