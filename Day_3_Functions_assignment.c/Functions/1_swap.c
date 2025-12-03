#include<stdio.h>
void swap();
int a=10;
int b=20;

int main()
{
	printf("before swaping :\na=%d\nb=%d\n",a,b);
	swap(a,b);
	printf("after swaping :\na=%d\nb=%d",a,b);
	return 0;
}

void swap(int x, int y)
{
   int temp = a;
   a=b;
   b=temp;
}

