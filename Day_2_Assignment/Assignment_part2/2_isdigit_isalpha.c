#include<stdio.h>
#include<ctype.h>
int main()
{
	char a;
	printf("enter a digit or alphabet: ");
	scanf("%c",&a);
	if(isalpha(a))
	{
		printf("It is a alphabet");
	}
	else if(isdigit(a))
	{
		printf("It is a digit");
		printf("ACSII Value is %d",a);
	}
	else
	{
		printf("Invalid Input");
	}		
    return 0;
}
