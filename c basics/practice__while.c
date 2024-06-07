#include<stdio.h>

int main(){
    int a,i=1;
    printf("enter the value of a\n");
    scanf("%d",&a);
 do{
     printf("%d\n",i);
     i++;
 }  while(i<=a); 
    return 0;
}