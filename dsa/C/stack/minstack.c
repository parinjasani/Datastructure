#include <stdio.h>
#define MAX 100

int stack[MAX],top=-1,size=5,minstack[MAX],min=0;


void push(int n){

   if(top == size-1)
   {
    printf("stack is overflow");
   }
   else{
    if(top == -1)
    {
    top++;
    stack[top]=n;
    minstack[top]=n;
    min=n;
    }
    else{
        if(n<min)
        {
            min=n;
        }
            top++;
            stack[top]=n;
            minstack[top]=min;

    }
   }
}

void pop()
{

    if(top <=-1)
    {
        printf("\nStack is underflow");
    }

   else{
    int x=stack[top];
    top--;
   }
    
}

void display()
{
    if(top==-1)
    {
        printf("stack is empty");

    }
    else{
        //printf("\n");
         printf("\nnormal stack:- ");
        for(int i=0;i<=top;i++)
        {

           
            printf("%d\t",stack[i]);


        }
        printf("\nmin stack   :- ");
         for(int i=0;i<=top;i++)
        {
            printf("%d\t",minstack[i]);
        }
    }
}


int main()
{

    

    push(12);
    push(-2);
    push(3);
    push(4);
    push(5);
    display();
    pop();
    display();
    return 0;
}