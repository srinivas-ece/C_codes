#include<stdio.h>
int main()
{
	int arr[20]={2,3,4,5,6,77,66};
	int *p1=arr;
	int min=*p1;
	int max=*p1;

	for(int i=0;i<7;i++){

		if(*p1<min){
			min=*p1;
		}
		if(*p1>max){
			max=*p1;
		}
		p1++;
	}
	printf("min:%d\n",min);
	printf("max:%d",max);

	return 0;
}

