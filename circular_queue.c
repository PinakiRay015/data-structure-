#include<stdio.h>
#define max 5
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
        printf("1-> Insert\n");
        printf("2-> delete\n");
        printf("enter your choice\n");
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
        }
    }
}
void enqueue(int element)
{
    if(count == max)
    {
        printf("--------\n");
        printf("overflow\n");
        printf("--------\n");
    }
    else
    {
        printf("enter the element you want to printf\n");
        scanf("%d" , &element);
        cqueue[rear] = element;
        rear =(rear+1)%max;
        count++;
    }
}
void dequeue()
{
    if(count == 0)
    {
        printf("-------------\n");
        printf("underflow\n");
        printf("------------\n");
    }
    else
    {
        printf("%d is deleted from the queue\n" , cqueue[front]);
        front = (front+1)%max;
        count--;
    }
}