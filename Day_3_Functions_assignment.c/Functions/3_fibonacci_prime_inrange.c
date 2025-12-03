#include<stdio.h>
int n,x,n1,c;
int is_prime(int);
void fib(int x )
{
	printf("fibonacci series\n ");
	int first=0,second=1,next;
	//next = first+second;
	//printf("%d\n",next);
	for(int i =0;i<x;i++)
	{
		next=first+second;
		first=second;
		second=next;
		if(n1<=i)
		{
	            if(is_prime(next))
	             {
		        printf("%d\n",next);
		     }
	        }
	}
}

int is_prime(int y)
{
	int prime;
    if(y<2){
	    return 0;
            }
		for(int m=2;m<y/2;m++)
		{
			if(y%m==0)
			{
			return 0;
			}
		}
		return 1;
}

int main()
{
	printf("enter Starting range: ");
	scanf("%d",&n1);//5
	printf("enter Ending range: ");
	scanf("%d",&n);//10
	c=n1-1;//4
	fib(n);
	
	return 0;
}
