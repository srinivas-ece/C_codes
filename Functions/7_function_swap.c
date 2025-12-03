#include<stdio.h>
void fun(int x, int y);
int a;
int b;
int main()
{
	printf("Enter value of A: ");
	scanf("%d",&a);
	printf("Enter value of B: ");
	scanf("%d",&b);
	printf("\nbefor swaping:\na=%d,b=%d",a,b);
	fun(a,b);
	printf("\nafter swaping:\na=%d,b=%d\n",a,b);
	return 0;
}
void fun(int x,int y)
{
  a=y;
  b=x;
}

