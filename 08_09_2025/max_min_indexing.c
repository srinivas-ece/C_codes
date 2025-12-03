#include<stdio.h>
int main(){
	int arr[20]={1,2,3,4,5,6,7,8,9.2};
	int *p=arr;
	int max=*p;
	int min=*p;

	for(int i=0;i<9;i++){
		if(*(p+i)<min){
			min=*(p+i);
		}
		if(*(p+i)>max){
			max=*(p+i);
		}
	}
		printf("max=%d\n",max);
		printf("min=%d",min);
	
		return 0;
}



