#include<stdio.h>
int main()
{
	int temp,a,b;
	printf("enter Small value First: ");
	scanf("%d",&a);
	printf("enter Second Value: ");
	scanf("%d",&b);

	while(b!=0)
	{
		temp=b;
		b=a%b;
		a=temp;
	}

	printf("GCD of Given Numbers: %d",a);
	return 0;
}
