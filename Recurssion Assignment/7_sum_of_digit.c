#include<stdio.h>
int sum(int);
int main()
{
	int ans,num;
	printf("Enter a number:");
	scanf("%d",&num);
	ans=sum(num);
	printf("%d\n",ans);
	return 0;
}
int div,add=0,reminder;
int sum(int x)
{
	reminder=x%10;
	div=x/10;
	add=add+reminder;
	if(reminder==0)
	{
		return add;
	}
	sum(div);

}
