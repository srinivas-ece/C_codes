#include<stdio.h>
int main()
{
	char array[20];
	printf("enter a word:");
	scanf("%s",&array);
	int length = strlen(array);
		printf("%d",length);	
	for(int i=0;i<length/2;i++)
	{
		int temp=array[i];
		array[i]=array[length-i-1];
		array[length-i-1]=temp;
	}
	for(int j=0;j<length;j++)
	{
		printf("%c",array[j]);
	}
	return 0;
}
