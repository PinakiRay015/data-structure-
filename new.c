#include<stdio.h>
#include<stdlib.h>
#include <string.h>
struct node{
	int data;
	struct node *next;
};

void create(int n){
	struct node *head, *new_node, *temp;
	for(int i=1;i<=n;i++){
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("\nenter the data %d: ",i);
	scanf("%d",new_node->data);
	new_node->next=0;
	if(head==0)
	{
		head=new_node=temp;
	}
	else{
		temp->next=new_node;
		temp=new_node;
	}
}
}
void display(){
	struct node *temp;
	while(temp!=0){
		printf("%d",temp->data);
		temp=temp->next;
	}
}
int main(){
	int n;
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
	create(n);
	display();
	
	return 0;
}