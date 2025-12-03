#include<stdio.h>
#include<stdlib.h>
int* fun(){
static int x=0;
	return &x;
}


int main(){
	int* a=fun();
	printf("%d",*a);
	return 0;
}
