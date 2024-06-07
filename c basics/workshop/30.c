#include<stdio.h>
#include<string.h>

int main(){
    char a[60],b[30];
    printf("enter the string");
    gets(a);
    printf("%s",a);
    
  strcpy(b,a);
   strrev(b);
    
  if(strcmp(a,b)==0)
   { printf("\nthe string are pelindrom");}
    else
  {  printf("\nthe string are not pelindrom");}
    
    return 0;
}   