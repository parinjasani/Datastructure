#include<stdio.h>

int main(){
    int i,l,b,h;
    
    printf("enter the value between 1 and 3");
    printf("\n1 is for area of square\n2 is for area of rectangle \n3 is for area of triangle\n");
    scanf("%d",&i);
    switch(i)
    {
        case 1: 
        
        printf("enter the length of square ");
        scanf("%d",&l);
        printf("the area of square is= %d",l*l);
        break;
        case 2:
        
        printf("enter the value of length and height  ");
        scanf("%d %d",&l,&h);
        printf("the area of the rectangle is = %d",l*h);
        break;
        case 3:
        
        printf("enter the value of l and b");
        scanf("%d %d ",&l,&b);
        printf("the area of the triangle is %d",0.5*l*b);
        default:
        printf("sacho nakho");
    }
    return 0;
}