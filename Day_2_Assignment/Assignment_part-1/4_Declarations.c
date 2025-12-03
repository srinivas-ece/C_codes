#include<stdio.h>
int main()
{
	int i=8,j=5;
	float x = 0.005,y=0.01;
	char c='c',d = 'd';

	int a = (3*i*j)%(2*d);
	int b = (i*j)%(c+2*d)/(x*y);
	int e = 5*(i+j)>'c';
	float f = 2*x+(y==0);
	int g = (x>y)&&(i>0)||(j<5);
	printf("%d\n%d\n%d\n%.2f\n%d\n",a,b,e,f,g);
	return 0;
}
