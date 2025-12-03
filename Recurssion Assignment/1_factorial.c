#include<stdio.h>
void fact(int);
int main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
  fact(num);
  return 0;
}

int sum=1;

void fact(int x)
{
	if(x==0)
	{
	 return;
	}
	sum=sum*x;
	x--;
	printf("%d\n",sum);
	fact(x);
}
