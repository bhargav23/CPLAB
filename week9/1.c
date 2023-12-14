//Week 9 - i) Write a C program to find the sum of a 1D array using malloc()
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i;
	scanf("%d",&n);
	p=(int *)malloc(sizeof(int*));
	for(i=0;i<n;i++)
		scanf("%d",(p+i));
	for(i=0;i<n;i++)
		printf("%d ",*(p+i));
}
