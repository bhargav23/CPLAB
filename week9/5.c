//Week 9 - iv)Write a C program to implement realloc()
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i;
	printf("Enter the size of the array");
	scanf("%d",&n);
	p=(int *)malloc(sizeof(int*));
	
	for(i=0;i<n;i++)
		scanf("%d",(p+i));
	
	for(i=0;i<n;i++)
		printf("%d ",*(p+i));
	
	printf("\nEnter the new size of the array by reducing : ");
		scanf("%d",&n);
	p = (int *)realloc(p,sizeof(int*)*n);
	printf("Array after resizing = ");
	for(i=0;i<n;i++)
		printf("%d ",*(p+i));
	free(p);
}
