#include <stdio.h>
#define MAX 100

int stack[MAX],top=-1,size;


void push(int n){

   if(top == size-1)
   {
    printf("stack is overflow");
   }
   else{
    top++;
    stack[top]=n;
    printf("pushed element is %d\n",n);
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
    printf("\npoped element is %d",x);
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
        for(int i=0;i<=top;i++)
        {

            printf("%d\t",stack[i]);

        }
    }
}

int main()
{
    printf("Enter the Size of the stack\n");
    scanf("%d",&size);
    
    int choice,n;

    while(choice!=4){
      
      printf("\n1.push\n2.pop\n3.display\n4.exit");
      printf("\nenter the choice:");
      scanf("%d",&choice);

      switch (choice)
      {
      case 1:
        printf("\nEnter the value of element");
        scanf("%d",&n);
        push(n);
        break;
      case 2:
       pop();
       break;
      case 3:
       display();
       break;

      case 4:
        printf("\nEXIT");
        break;
     
      default :
        printf("Enter the valid input");
      }
     
    }
    
    return 0;
}