#include<stdio.h>

int main(){
float p,r,n;
    float si;
    printf("enter the value of p r n\n");
    scanf(" %f %f %f",&p,&r,&n);
    si=(p*r*n)/100;
    printf("simple interest=%f",si);

    return 0;
}