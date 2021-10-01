#include<stdio.h>
#define max 3
int cqueue[max];
int rear = 0;
int front = 0;
int count = 0;
void enqueue();
void dequeue();
int main()
{
    int choice;
    while(1)
    {
        printf("1-> INSERT\n");
        printf("2-> DELETE\n");
        printf("Enter your choice\n");
        scanf("%d" , &choice);
        switch(choice)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            default:
            printf("Invalid choice\n");
            break;
        }
    }
}
void enqueue()
{
    int element;
    if(count==max)
    {
        printf("--------\n");
        printf("Overflow\n");
        printf("--------\n");
    }
    else
    {
        printf("enter the element that you want to insert\n");
        scanf("%d" , &element);
        cqueue[rear] = element;
        rear = (rear+1)%max;
        count++;
    }
}
void dequeue()
{
    if(count == 0)
    {
        printf("-------------\n");
        printf("Underflow\n");
        printf("--------------\n");
    }
    else
    {
        printf("----------------------------\n");
        printf("%d is deleted from the stack\n" , cqueue[front]);
        printf("-----------------------------\n");
        front = (front+1)%max;
        count--;
    }
}
