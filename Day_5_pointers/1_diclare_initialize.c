#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	char name[]="harsha";
	double doubl=2.222233355;
	float floa=35.6258;

	printf("int value:%d,address:%p\nchar value:%s,address:%p\ndouble value:%lf,address:%p\nfloat value:%f,address:%p\n,int value b=%d,and address%p",a,&a,name,&name,doubl,&doubl,floa,&floa,b,&b);
	return 0;



}
