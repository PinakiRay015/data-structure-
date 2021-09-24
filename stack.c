/* C PROGRAM OF DIFFRENT TYPE OF OPERATIONS ON STACKS USING ARRAYS
PROGRAMMER :- PINAKI RAY
DATE :-25TH SEPT 2021 / 2:07 AM */


#include<stdio.h>
#define size 3
int stack[size];
int top=-1;
void push();
void pop();
void peek();
int main()
{
 int choice , count=1;
 while(count==1)
   {
     printf("1-> PUSH INTO STACK\n");
     printf("2-> POP INTO STACK\n");
     printf("3-> PEEK INTO STACK\n");
     printf("Enter your choice\n");
     scanf("%d",&choice);
     switch(choice)
       {
         case 1:
         push();
         break;
         case 2:
         pop();
         break;
         case 3:
         peek();
         break;
         default:
         printf("INVALID CHOICE");
        }
    }
}
void push()
{
    int element;
    if(top == size-1)
    {
        printf("---------------------------------------------\n");
        printf("Stack overflow !!! can't able to push element\n");
        printf("---------------------------------------------\n");
    }
    else
    {
        printf("enter the element which you want to push inside stack\n");
        scanf("%d" , &element);
        top = top+1;
        stack[top]=element;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("----------------------------------------------------------\n");
        printf("stack underflow!!! cant able to pop element from the stack\n");
        printf("-----------------------------------------------------------\n");
    }
    else
    {
        printf("-------------------------------------------- \n");
        printf("%d is popped out of the stack\n" , stack[top]);
        printf("---------------------------------------------\n");
        top=top-1;
    }
}
void peek()
{
    if(top==-1)
    {
        printf("--------------------------------------------------------------------\n");
        printf("stack is underflow !!!! can't able to peek an element from the array\n");
        printf("---------------------------------------------------------------------\n");
    }
    else
    {
        printf("--------------------------\n"); 
        printf("%d is the top most element\n" , stack[top]);
        printf("--------------------------\n");
        top = top-1;
    }
}