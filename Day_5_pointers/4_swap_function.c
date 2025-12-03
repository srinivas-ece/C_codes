#include<stdio.h>
void swap();
int main()
{
	int a=10;
	int b=20;
	swap(&a,&b);
	return 0;

}

void swap(int *c,int*d)
{
 int temp=*c;
 *c=*d;
 *d=temp;

 printf("%d %d",*c,*d);
}
