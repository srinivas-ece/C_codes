#include<stdio.h>
int main(){
	int a=10;
	int b=20;
	int *p=&a;
	int*q=&b;

	int*temp = p;
	p=q;
	q=temp;
	printf("swap a=%d,b=%d",*p,*q);
	return 0;
}
