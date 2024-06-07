#include<stdio.h>

int main(){
    int physics ,maths, chemistry;
    float avg;
    printf("enter the marks of maths \n");
    scanf("%d",&maths);
    printf("enter the marks of chemistry\n");
    scanf("%d",&chemistry);
    printf("enter the marks of physics \n");
    scanf("%d",&physics);
    avg=(maths+chemistry+physics)/3;
    if(avg<40 || maths<33 || physics<33 || chemistry <33)
    {
        printf("your pertange is %f and you are fail",avg);

    }
    else{
        printf("congo. your pertange is %f and you are passed ",avg);
    }
    return 0;
}