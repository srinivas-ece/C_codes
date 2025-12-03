#include<stdio.h>
int main(){
	int x=99;
	int* a=&x;
	printf("%p\n",a);
	printf("%d",*a);
	*a=240;
	printf("%d",*a);
	return 0;

}
