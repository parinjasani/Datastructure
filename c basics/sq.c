#include<stdio.h>
int sq(int a){
    return (a * a);
}

int main(){
    int n;
    printf("plaese enter your number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("\n%d : %d",i,sq(i));
    }
    return 0;
}