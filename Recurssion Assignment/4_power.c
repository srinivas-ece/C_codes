#include<stdio.h>
int power(int,int);
int main()
{
	int base,expo;
        printf("Enter base value:");
        scanf("%d",&base);
        printf("enter Exponent value:");
        scanf("%d",&expo);
        int po =power(base,expo);
        printf("%d",po);
        return 0;
}

int i=1;

int power(int x,int y)
{
	if(y==i)
	{
	return x ;
	}

	x=x*y;
	i++;
	power(x,y);
}
