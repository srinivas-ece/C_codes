#include<stdio.h>
int main()
{
	int num,reminder,sum=0;
	int c=0;
	printf("enter a number");
	scanf("%d",&num);
	int original = num;
	while (num!=0){
	    num=num/10;
	    c++;
	}
	  num=original;
	while(num>0)
	{
		reminder=num%10;
		int power =1;
		for(int i=0; i<c;i++){
		    power=reminder*power;
		}
		sum=sum+power;
		num=num/10;
	}
	if(sum==original)
	{
	  printf("%d is a Armstrong Number %d",original,sum);
	}
	else
	{
	  printf("%d is Not a Armstrong Number %d",original,sum);
	}
	
	return 0;
}
