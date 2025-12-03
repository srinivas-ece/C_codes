#include<stdio.h>
int main()
{
	int num=0,sum =0;
	printf("enter the num ");
	scanf("%d",&num);

	while(num!=0)
	{
		if(num%2!=0)
		{
			sum+=num;
		}
		num--;
	}
	printf("%d",sum);
	return 0;
}

