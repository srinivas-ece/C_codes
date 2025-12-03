#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	printf("enetr size");
	scanf("%d",&n);
	int* b;
	b=(int*)calloc(n,sizeof(int));
	if(b==NULL){
		printf("memory error");
	}

	for(int i=0;i<n;i++){
	 printf("enetr value-%d:",i);
		scanf("%d", b+i);
	}

	int* c=(int*)calloc(n,sizeof(int));
	for(int i=0;i<n;i++){
		printf("%d\n",*(b+i));
	}

}
