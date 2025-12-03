#include<stdio.h>
int main()
{
	float pi =3.1415;
	float r,area,perimeter;
	printf("Enter Radius Of a Circle: ");
	scanf("%f",&r);
	float c = r*r;
	area = pi*c;
	perimeter = 2*pi*r;
	printf("Area of Circle = %f\n Perimeter od a Circle = %f",area,perimeter);
	return 0;
}

