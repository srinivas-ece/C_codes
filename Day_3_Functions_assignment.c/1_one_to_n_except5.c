#include<stdio.h>


int main()
{
	int num,sum=0;
	printf("Enter a Number: ");
	scanf("%d",&num);
for(int i=0;i<=num;i++)
{
	if(i%5==0)
	{
	continue;
	}
	sum=sum+i;
	printf("%d\n",sum);
    }
    printf("Final Answer:%d ",sum);
    return 0;
}
