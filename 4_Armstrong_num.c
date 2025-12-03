#include<stdio.h>
int main()
{
	int reserve=0,i=0,num,reminder,sum=0,f,e;
	int a=0,b=0,c=0;
	printf("enter a number");
	scanf("%d",&num);
	int original = num;
	while(num>0)
	{
		reminder=num%10;
		reserve=reserve+(reminder*reminder*reminder);
		num=num/10;
	}
	if(reserve==original)
	{
	  printf("%d is a Armstrong Number %d",original,reserve);
	}
	else
	{
	  printf("%d is Not a Armstrong Number %d",original,reserve);
	}
	
	return 0;
}

