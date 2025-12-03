#include<stdio.h>
#define size 20
int main()
{
	int b=0;
	int array[size]={1,22,3,43,54,6,7,58,9,170,181,9120,13,14,15,16,17,18,19,20};
	for(int i =0;i<size;i++)
	{
		if(array[i]>b)
		{
			b=array[i];
		}
	}
	printf("Biggest number in array:%d",b);
	return 0;
}
