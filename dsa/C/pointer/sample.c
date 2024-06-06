#include <stdio.h>
#include <stdlib.h>


struct Tmp
{
    int data;
    struct Tmp *next;

};
typedef struct Tmp example;
int main()
{

   example s1;
   s1.data=10;
   s1.next=NULL;
   example* example_ptr=(example*)malloc(sizeof(example)); 
   example_ptr->data=20;
   example_ptr->next=&s1;

   example *tmp;
   tmp=example_ptr;

   while (tmp!=NULL)
   {
    printf("%d \t",tmp->data);
    tmp=tmp->next;
   }
   
    return 0;
}