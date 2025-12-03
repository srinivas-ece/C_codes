#include<stdio.h>
int main()
{
	int a=10,b=20;
	int Add = a+b;
	int sub = a-b;
	int mul = a*b;
	float Div = (float)a/b;
	int Module = a%b;

	printf("A=%d,B=%d\nAddition = %d\nSubtraction = %d\nMultiplication = %d\nDivision = %f\nreminder \"Modules\" = %d",a,b,Add,sub,mul,Div,Module);
	return 0;
}
