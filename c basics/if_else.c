#include<stdio.h>

int main(){
    int age; 
    printf ("enter the age ");
    scanf("%d",&age);
    if(age >= 18 && age <= 70)
    {
        printf("you can drive ");
    }
           else 
           {
               printf(" you cannot drive");
           }
            return 0;
}