#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *link;
};
int main()
{
	struct node *head=NULL,n1,n2,n3;
	head = (struct node*)malloc(sizeof(struct node *));
	head->link=&n1;
	n1.data = 10;
	n1.link = &n2;
	n2.data = 20;
	n2.link = &n3;
	n3.data = 30;
	n3.link = NULL;
	printf("%d\n",head->link->data);
	printf("%d\n",n1.link->data);
	printf("%d",n2.link->data);
}
