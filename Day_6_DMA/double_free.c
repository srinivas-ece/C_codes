#include<stdio.h>
#include<stdlib.h>
int main(){
int a;
printf("enter a number");
scanf("%d",&a);
int* arr=(int*)malloc(sizeof(int));
if(arr==NULL){
	printf("memory ledhu ra edhava!");
}
free(arr);
free(arr);
return 0;
}
