// Week 9 - iii) Enter n students data using calloc() and display failed students list
#include<stdio.h>
#include<stdlib.h>
	struct student{
		char name[50];
		int rno;
		float marks;
	};
int main()
{
	int i,n,sum=0;
	float avg;
	struct student *p;
	
	printf("Enter the no of students");
	scanf("%d",&n);
	
	p = (struct student *)calloc(sizeof(struct student *),n);
	for(i=0;i<n;i++){
		printf("Enter the name,rno and marks of the student %d : ",i+1);
		scanf("%s",(p+i)->name);
		scanf("%d",&(p+i)->rno);
		scanf("%f",&(p+i)->marks);
	}
	for(i=0;i<n;i++){
		printf("Name = %s\n",(p+i)->name);
		printf("RNo = %d\n",(p+i)->rno);
		printf("Marks = %f\n",(p+i)->marks);
	}
	for(i=0;i<n;i++){
		if((p+i)->marks <40)
			printf("R.No %d Faild", (p+i)->rno);
	}	
	
}
