#include<stdio.h>
int main()
{
	int array[10]={1,2,3,4,5,6,7,8,9,10};
	int temp=array[0];
	for(int i=0;i<=8;i++)
	{
		array[i]=array[i+1];
		printf("%d\t",array[i]);
		if(i==8)
		{
			printf("%d",temp);
	        }
	}
	return 0;
}
