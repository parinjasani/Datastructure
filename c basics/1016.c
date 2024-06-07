#include<stdio.h>

int main(){
    int x=10, y=15;
    x=x++;
    y=++y;
    printf("%d %d",x,y);
    return 0;
}