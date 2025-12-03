#include<stdio.h>
int main(){
	int x=10;
	int* p=&x;
	printf("%p\n",p);
	p++;
	printf("%p\n",p);
	printf("%d\n",*p);
	p--;
	printf("%p\n",p);
	printf("%d\n",*p);
	*p=*p+1;
	printf("%d\n",*p);
	*p=*p-1;
	printf("%d\n",*p);

	return 0;
}
