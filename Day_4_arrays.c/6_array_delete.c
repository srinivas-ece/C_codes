#include<stdio.h>
#define size 20

int main()
{
	int num,index;
	char array[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	printf("enter a number: ");
	scanf("%d",&num);
	for(int i=0;i<=size;i++)
	{
		if(num==array[i])
		{
			index=array[i];
		}
	
	}
	printf("\nindex:%d\n",index);
	for(int j=index;j<size;j++){
		array[j-1]=array[j];
	}
	array[size]=0;
	
	for(int k=0;k<size-1;k++)
	{
		printf("%d,",array[k]);
	}
	return 0;
}
