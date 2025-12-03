#include<stdio.h>
#define n 10
int main()
{
	int sum=0;
	int array[n]={1,2,3,4,5,6,7,8,9,0};
	for(int i =0;i<=n-1;i++)
	{
		sum+=array[i];
	printf("%d+",sum);
	}
	printf("Sum of Array:%d",sum);
	return 0;
}
