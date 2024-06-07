#include<stdio.h>

int main(){
    int marks1,marks2,marks3,marks4,marks5,avg;
printf("enter the value of marks1");
scanf("%d",&marks1);
printf("enter the value of marks2");
scanf("%d",&marks2);
printf("enter the value of marks3");
scanf("%d",&marks3);
printf("enter the value of marks4");
scanf("%d",&marks4);
printf("enter the value of marks5");
scanf("%d",&marks5);
avg=(marks1+marks2+marks3+marks4+marks5)/5;
printf("the percentage is %d",avg);
if(avg>100&&avg<90)
printf("party apo");
if(avg>80 && avg<90)
printf("b grade");
else if(avg>0 && avg<80)
printf("do hardwork");



    return 0;
}