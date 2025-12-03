#include<stdio.h>
#include<string.h>
int c;
int palindrome(int);
int main()
{
	int num1;
	printf("enter a number:");
	scanf("%d",&num1);
	int d= palindrome(num1);
	printf("%d",d);
	if(d==num1)
	{
		printf("Yes it is");
	}
	else
	{
		printf("Not it is");
	}
	return 0;
}

int rev=0,reminder;
int palindrome(int x)
{
	if(x%10==0)
	{
		return rev;
	}
	reminder=x%10;
	rev=rev*10+reminder;
	x=x/10;
	palindrome(x);
}
