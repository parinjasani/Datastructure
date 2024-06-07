#include <stdio.h>

int main()
{
    int i, j, k;
    int arr[2][2][2];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                scanf("%d\n", &arr[i][j][k]);
            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                printf("%d %d %d %d\n",i,j,k,arr[i][j][k]);
            }
        }
    }
    return 0;
}