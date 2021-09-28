/*C PROGRAM TO PERFORM DIFFERENT TYPES OF OPERATION INSIDE A QUEUE
PROGRAMMER :- PINAKI RAY
DATE :- 28TH SEPT 2021
..
.
.
.
.
*/
#include<stdio.h>
#define max 5
int queue[max];
int rear,front;
void insert();
void delete();
int main()
{
    int choice , count = 1;
    while(count=1)
    {
        printf("1-> Insert an element inside the queue\n");
    printf("2-> Delete an element inside the queue\n");
    printf("Enter your choice\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
        insert();
        break;
        case 2:
        delete();
        break;
        default:
        printf("INVALID CHOICE!!!!\n");
    }

    }

}
void insert()
{
    int element;
    if(rear==max)
    {
        printf("--------\n");
        printf("OVERFLOW\n");
        printf("--------\n");
    }
    else
    {
        printf("Enter the element that you want to insert inside queue\n");
        scanf("%d",&element);
        queue[rear] = element;
        rear++;
    }
}
void delete()
{
    if(rear==front)
    {
        printf("--------------\n");
        printf("queue is empty\n");
        printf("--------------\n");
    }
    else
    {
        printf("----------------------------\n");
        printf("%d is deleted from the queue\n" , queue[front]);
        printf("----------------------------\n");
        front++;
    }
}