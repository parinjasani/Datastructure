#include <stdio.h>

int main()
{
    int week;
    printf("plz enter the number of the day");
    scanf("%d", &week);
    switch (week)
    {
    case 1:
        printf("sunday");
        break;

    case 2:
        printf("monday");
        break;
    case 3:
        printf("tuesday");
        break;
    case 4:
        printf("wensday");
        break;
    case 5:
        printf("thurday");
        break;
    case 6:
        printf("friday");
        break;
    case 7:
        printf("satureday");
        break;

    default:
        printf("not a valid number");
        break;
    }
    return 0;
}