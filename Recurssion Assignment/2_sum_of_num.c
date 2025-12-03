#include<stdio.h>
void sum(int);
int main()
{
	int num;
        printf("enter number:");
        scanf("%d",&num);
        sum(num);
        return 0;
}
int sum1=0;
void sum(int x)
{
	if(x==0)
	{
	   return;
	}
	sum1=sum1+x;
	x--;
	printf("%d\n",sum1);
	sum(x);
}

