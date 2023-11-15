#include<stdio.h>
int main()
{
	int a[20];
	int i,j,b,temp,r,n,carry;
	scanf("%d",&b);
	i=0;
	while(b!=0)
	{
		r = b%2;
		b=b/2;
		a[i]=r;
		i++;
	}
	
	for(j=0;j<i;j++)
		printf("%d ",a[j]);
	n=i; 
	for(i=0,j=n-1;i<j;i++)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		j--;
	}
	printf("\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]); 
		
	for(i=0;i<n;i++)
	{
		if(a[i]==0)
			a[i]=1;
		else
			a[i]=0;
	}
	printf("\nOnce Complement of the number is \n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	carry = 1;
	for(i=n-1;i>0;i--){
		if(a[i] == 1 && carry ==1) {
			a[i]==0;
			carry = 1;
		} else if(carry == 1 && a[i]==0) {
			a[i] = 1;
			carry = 0;
		}
				
				
	}
	printf("\nTows Complement of the number is \n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
