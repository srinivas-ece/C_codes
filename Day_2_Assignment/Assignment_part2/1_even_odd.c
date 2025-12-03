#include<stdio.h>
int main()
{
	int num,a,b;
	printf("Enter a Number :");
	scanf("%d", &num);
	num%2==0 ? printf("%d is a Even Number", num) : printf("%d is a Odd Number",num);
	return 0;
}
