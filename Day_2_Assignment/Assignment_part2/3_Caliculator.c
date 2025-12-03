#include<stdio.h>
int main()
{
	int num1,num2,selection;
	
	printf("Enter value of A");
	scanf("%d",&num1);
	
	printf("Enter value of B");
	scanf("%d",&num2);
    
	printf("Select you Option by entering the number : ");
	printf("1)Addition \n2)Subtraction\n3)Division\n4)Multiplication\n");
	
	scanf("%d",&selection);

	switch(selection)
	{
		case 1:
			printf("%d",num1+num2);
			break;
		case 2:
			printf("%d",num1-num2);
			break;
		case 4:
			printf("%d",num1*num2);
			break;
		case 3:
			printf("%f",(float)num1/num2);
			break;
		default:
			printf("Enter Valid Input");
			break;
	}
                    return 0;
}
