// ii) Write a C program to find the total, average of n students using structures
#include<stdio.h>
	struct student{
		char name[50];
		int rno;
		float marks;
	};
int main()
{
	int i,n,sum=0;
	float avg;
	struct student s[10];
	printf("Enter the no of students");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the name,rno and marks of the student %d : ",i+1);
		scanf("%s",s[i].name);
		scanf("%d",&s[i].rno);
		scanf("%f",&s[i].marks);
	}
	for(i=0;i<n;i++){
		sum = sum + s[i].marks;
	}	
	avg =  sum / n;
	printf("Total = %d\n",sum);
	printf("Average = %f",avg);
}
