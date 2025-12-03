#include<stdio.h>

void fun( int *x, int *y){
     *x=40;
     int z;
     y=&z;
     printf("%p\n%p",x,y);
     printf("\n%d,%d",*x,*y);
}


int main(){
	int a;
	fun(&a,&a);
	printf("\n%d",a);
	return 0;
}
