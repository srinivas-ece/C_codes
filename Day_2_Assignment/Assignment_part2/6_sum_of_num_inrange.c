#include<stdio.h>
int main()
{
	int num1,num2,sum=0;
	printf("Enter the  Starting Range:  ");
	scanf("%d",&num1);
	printf("Enter the Ending Range   :  ");
	scanf("%d",&num2);
	for(int i=num1;i<=num2;i++)
	{
		sum+=i;
		if(num2==i)
		{
			printf("%d\n",sum);
			break;
		}
	}
        return 0;
}
