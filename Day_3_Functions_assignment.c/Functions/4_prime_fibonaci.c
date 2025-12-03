#include<stdio.h>
int fibo(int,int,int);
int num1,num;
int is_prime(int);
int main()
{
	int c,num2;
	printf("enter starting range: ");
	scanf("%d",&num);
	printf("enter endng range: ");
	scanf("%d",&num1);
	c=fibo(0,1,1);
	printf("fibo:%d",c);
	return 0;
}
int fibo(int x,int y,int z)
{
	if(num<=z)
	{
	if(is_prime( x)){
		printf("%d\n",x);
	}
	}
	if(num1==z){
		return x;
	}
	fibo(y,x+y,++z);

}

int is_prime(int a){

	if(a==1){
		return 0;
	}
	if(a==0)
	{
	   return 0;
	}   
		for(int i=2;i<a;i++)
		{
		if(a%i==0)
			{
			return 0;
			break;
			}
		}
	
	return 1;
	
}
