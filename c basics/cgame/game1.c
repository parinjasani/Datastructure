#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100+1;
    // printf("the number is =%d",number);
   
    do
    {
        printf("guess the number between 1 to 100\n ");
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("enter number is higher number plz enter lower number\n");

        }
        else if(guess<number)
        {
            printf("enter number is lower number plz enter higher number\n");
        }
        else 
        {
            printf("congo you guess correct number in %d atempt",nguesses);
        }
          nguesses++;
    }while(guess!=number);
    
    return 0;
}