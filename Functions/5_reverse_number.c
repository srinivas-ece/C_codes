#include<stdio.h>
void fun();
	long int reverse=0;
int main()
{
	int c,num;
	printf("enetr a number");
	scanf("%d",&num);
	fun(num);
	printf("%ld",reverse);
	return 0;
}
void fun(int num1)
{
	int reminder;
      	  if(num1==0)
	  {
	  return;
	  }
	reminder=num1%10;
	reverse=reverse*10+reminder;
	fun(num1/10);
}



		
		
