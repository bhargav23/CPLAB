#include<stdio.h>
int main()
{
	int a[10];
	int i,j,k,n,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;) {
			if(a[i]==a[j]){
				for(k=j;k<n;k++){
					a[k] = a[k+1];
				} 
				n--;
				
			} else {
				j++;
			}
		}
	}
	
	
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
