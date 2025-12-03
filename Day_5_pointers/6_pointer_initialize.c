#include<stdio.h>
int main(){
	int a=10;
	int*p=&a;

	printf("value is %d,address:%p",*p,p);
		return 0;
}
