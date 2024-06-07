#include<stdio.h>
int main()
{
    char a[20]="parin";
    char b[20]= " is lodu";
    printf("length of char %d %d",strlen(a),strlen(b));
    printf("\nthe upper case %s %s",strupr(a),strupr(b));
    printf("\nthe combine string are %s" , strcat(a,b));
    return 0;
}