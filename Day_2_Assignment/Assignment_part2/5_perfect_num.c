#include<stdio.h>
int main()
{
	int n , sum = 0;
	printf("enter number : ");
	scanf("%d",&n);
	printf("%d=",n);
	int c = n-1;	

	for(int i=1;i<=n/2;i++)
	{
		sum +=i;
		printf("%d+",i);
	        if(sum==n)
	        {
		break;
	        }
        }
         if(sum==n)
         {
              printf("\n%d is a Perfect Number",n);
	 }

	else
	{
		printf("\n%d is  not a perfect number",n);
	}
	return 0;
}

