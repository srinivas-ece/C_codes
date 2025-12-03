#include<stdio.h>

int main(){

	int arr1[3]={1,2,3};
	int arr2[3];
	int *p=arr1;
	int i;


	for(i=0;i<3;i++){
		arr2[i] = *(p+i);

		printf("%d",arr2[i]);
	}
	return 0;
}	

		


