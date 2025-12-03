#include<stdio.h>
int main(){
	int fact=1,i,n;
	printf("Enter the n value :");
	scanf("%d",&n);

	for(i=n;i>=1;i--)
	{	
		fact=fact*i;
	}
	printf("%d",fact);
	return 0;
}
