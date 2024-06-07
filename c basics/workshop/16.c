#include<stdio.h>

int main(){
    int a,b,i;
    
    
     printf("\n 1 is for the addition \n 2 for substration \n 3 is for multiplication \n 4 is for division \n 5 is for modulo ");
    printf("\nenter number between 1 and 5");
   scanf("%d",&i);

    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);

  
   
    switch(i)
    {
        case 1:
        printf("addition = %d",a+b);
        break;
        case 2:
        printf("substration = %d",a-b);
        break ;
        case 3:
        printf("multiplication = %d ",a*b);
        break;
        case 4:
        printf("division = %d",a/b);
        break;
        case 5:
        printf("modulo = %d",a%b);
        break;
        default:
        printf("plz enter the right number");

            }

    return 0;
}