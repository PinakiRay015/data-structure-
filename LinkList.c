#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void LinkListTraverse(struct node *ptr)
{
    while(ptr != NULL)
    {
        printf("The element is %d\n" , ptr->data);
        ptr = ptr->next;
    }
}

struct node *Insert_At_First(struct node*head , int data)
{
    struct node *ptr=malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

struct node *Insert_In_Between(struct node*head , int data , int index)
{
    struct node *ptr=malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while(i != index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

int main()
{
    int choice;
    struct node *head = malloc(sizeof(struct node));
    struct node *second = malloc(sizeof(struct node));
    struct node *third = malloc(sizeof(struct node));
    struct node *tail = malloc(sizeof(struct node));

    head->data = 30;
    head->next = second;

    second->data = 40;
    second->next = third;

    third->data = 50;
    third->next = tail;

    tail->data = 60;
    tail->next = NULL;

    printf("1-> Insert at the first\n");
    printf("2-> Insert in between\n");
    printf("Enter your choice\n");
    scanf("%d" , &choice);
    switch(choice)
    {
        case 1:
        LinkListTraverse(head);
        head = Insert_At_First(head , 56);
        printf("After inerting at the first\n");
        LinkListTraverse(head);
        break;
        case 2:
        LinkListTraverse(head);
        head = Insert_In_Between(head , 200 , 2);
        printf("After inserting in between\n");
        LinkListTraverse(head);
        break;
        default:
        printf("Invalid choice\n");
    }
    return 0;
}