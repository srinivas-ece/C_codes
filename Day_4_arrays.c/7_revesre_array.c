#include<stdio.h>
	int array[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
int main()
{
	int i=0;
	int j=14;
	int temp;
	while(i<14/2)
	{
		temp = array[i];
		array[i]=array[j];
		array[j]=temp;
	        i++;
	        j--;
	}
	
	for(int k=0;k<15;k++)
	{
		printf("%d\t",array[k]); 
	}	
	return 0;
}
