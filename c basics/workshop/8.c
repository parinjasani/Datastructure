#include<stdio.h>

int main(){
    const float pi=3.14;
    int r;
    float area;
    printf("enter the value of r");
    scanf("%d",&r);
    area=pi*r*r;
    printf("the area of circle is %f",area);

    return 0;
}