#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("ENTER SIZE:");
	scanf("%d",&n);
	int *p=(int*)malloc(n*sizeof(int));
	if(p==NULL){
		printf("memory allocation failed");
	}
	for(int i=0;i<n;i++){
		printf("enter %d value:",i);
		scanf("%d",p+i);
	}
	for(int k=0;k<n;k++){
		printf("%d",*(p+k));
	}
	free(p);
	return 0;
}
