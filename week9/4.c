// iv) Read student name and marks from the command line and display the student details along with the total.
#include<stdio.h>
	struct student{
		char name[50];
		int rno;
		float marks[3];
		float total;
	};
int main()
{
	int i,j,n,sum=0;
	float avg;
	struct student s[10];
	printf("Enter the no of students");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the name,rno and marks of the student %d : ",i+1);
		scanf("%s",s[i].name);
		scanf("%d",&s[i].rno);
		for(j=0;j<3;j++) {
			printf("Enter Marks of Subject %d : ",i+1);
			scanf("%f",&s[i].marks[j]);
		}
			
	}
	for(i=0;i<n;i++){
		sum = 0;
		for(j=0;j<3;j++) {
			sum = sum + s[i].marks[j]; //Sum of all the subjects
		}
		s[i].total = sum;
	}	
	for(i=0;i<n;i++){
		printf("Name = %s\n",s[i].name);
		printf("RNo = %d\n",s[i].rno);
		printf("Total Marks = %f\n",s[i].total);
	}
}
