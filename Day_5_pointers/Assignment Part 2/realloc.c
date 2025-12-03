#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("enetr memory size:");
	scanf("%d",&n);
	int* arr=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		scanf("%d",arr+i);
	}
	for(int i=0;i<n;i++){
		printf("%d",*(arr+i));
	}
	
	int v;
	printf("enetr new size:");
	scanf("%d",&v);
	arr=realloc(arr,(n+v)*sizeof(int));
	for(int i=n;i<v;i++){
		scanf("%d",arr+i);
	}
	int f=n+v;
	for(int i=0;i<f;i++){
		printf("%d",*(arr+i));
	}
	free(arr);
	return 0;

}
