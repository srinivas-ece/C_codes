#include<stdio.h>
int main(){
	int *a;
	*a=10;
	printf("%p\n",a);
	a++;
	printf("%p",a);
	printf("%d",*a);
	return 0;
}
