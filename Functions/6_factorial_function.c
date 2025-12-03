#include<stdio.h>
void fun(int x);
int fact=1;
int main()
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	fun(num);
	printf("%d",fact);
	return 0;

}

void fun(int x)
{
    if(x==1)
    {
    return;
    }
    printf("%d\n",x);
    fact=fact*x;
    fun(x-1);
}
