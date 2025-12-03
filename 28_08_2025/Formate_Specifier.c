#include<stdio.h>
int main(){
	int a =-10;
	long int e =-111222333444555666777888.3666415;
	long long int f = -111222333444555666777888999.2365464;
	signed int g = -500;
	unsigned int h = -500;
	unsigned long int i = -111222333444555666777888999.566974252;
	float b = -123.23456789456123;
	double c = 10.0/3;
	long double d = 10.0/3;
	 
	printf("integer:%d\n",a);
	printf("integer:%ld\n",e);
	printf("integer:%lld\n",f);
	printf("integer:%d\n",g);
	printf("integer:%u\n",h);
	printf("integer:%llu\n",i);
        printf("integer:%.6f\n",b);
	printf("integer:%.8lf\n",c);
	printf("integer:%.15Lf\n",d);
	return 0;
	}

