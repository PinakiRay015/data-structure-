#include<stdio.h>
#define SIZE 5
int top = -1;
int stack[SIZE];
void push(int item);
int pop();
int peep();

void main()
{
	int item, choice, cont = 1;

	while(cont == 1)
	{
		printf("\n1.Push onto stack.\n");
		printf("\n2.Pop from stack.\n");
		printf("\n3.Peep into stack.\n");

		printf("\nEnter your choice: ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				printf("\nEnter the value of item: ");
				scanf("%d",&item);
				push(item);
				break;

			case 2:
				item = pop();
				if(item != NULL)
				{
					printf("\nItem popped out: %d\n",item);
				}				
				break;

			case 3:
				item = peep();
				if(item != NULL)
				{
					printf("\nItem at top of stack: %d\n",item);
				}				
				break;

			default:
				printf("\nInvalid choice.\n");
				break;
		}
	}
}
void push(int item)
{
	if(top >= SIZE-1)
	{
		printf("\nStack Overflow. Push not possible.\n");
	}
	else
	{
		top = top+1;
		stack[top] = item;
	}
}
int pop()
{
	int item = NULL;

	if(top <= -1)
	{
		printf("\nStack Underflow. Pop not possible.\n");
	}
	else
	{
		item = stack[top];
		stack[top] = NULL;
		top = top-1;
	}
	return(item);
}
int peep()
{
	int item = NULL;

	if(top <= -1)
	{
		printf("\nStack Underflow. No element in stack.\n");
	}
	else
	{
		item = stack[top];
	}
	return(item);
}