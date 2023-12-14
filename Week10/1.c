#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *link;
};
int main()
{
	struct node *head=NULL,*first=NULL,*second=NULL;
	head = (struct node*)malloc(sizeof(struct node *));
	first = (struct node*)malloc(sizeof(struct node *));
	second = (struct node*)malloc(sizeof(struct node *));
	
	head->link=first;
	first->link=second;
	second->link = NULL; 
	
	head->data = 10;
	first->data = 20;
	second->data = 30;
	
	printf("%d\n",head->data);
	printf("%d\n",head->link->data);
	printf("%d\n",first->link->data);
	
	struct node *current = head;
	printf("%d\n",current->data);
	current = current->link;
	printf("%d\n",current->data);
	current = current->link;
	printf("%d\n",current->data);
	
	current = head;
	while(current!=NULL)
	{
		printf("%d\n",current->data);
		current = current->link;
	}
}
