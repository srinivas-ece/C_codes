#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("enter a number:");
	scanf("%d",&n);

	int* arr=(int*)calloc(n,sizeof(int));
	if(arr==NULL){
		printf("memory not allocated");
	}

	for(int i=0;i<n;i++){
                scanf("%d",arr+i);
        }


	for(int i=0;i<n;i++){
		printf("%d",*(arr+i));
	}
	return 0;
}
