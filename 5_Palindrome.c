#include<stdio.h>
int main()
{
        int n,sum=0,r;
        printf("Enter a digit ");
        scanf("%d",&n);
	int orginal=n;
        while (n>0)
        {
                r=n%10;
                sum=sum*10+r;
                n=n/10;
        }
		if(orginal==sum)
		{
			printf("yes it is palidrome%d",sum);
		}
		else
		{
			printf(" It is not a palidrome%d",sum);
		}

  return 0;
}


