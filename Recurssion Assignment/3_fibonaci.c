#include<stdio.h>
void fibonaci(int,int,int);
int num;
int main()
{
	printf("enter a number:");
		scanf("%d",&num);
		fibonaci(0,1,0);
		return 0;
}
void fibonaci(int x,int y,int z)
{
	int c;
	if(num==z)
	{
	 return;
	}
	c=x+y;
	printf("%d\n",c);
	y=x;
	x=c;
	z++;
	fibonaci(x,y,z);

}
