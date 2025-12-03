#include<stdio.h>
union data{
	int a;
	char b;
};

int main(){
	union data s1;
	printf("%ld",sizeof(union data));
	s1.a=256;
	s1.b=5;
//	s1.a=40;

	printf("\n%d,%d\n",s1.a,s1.b);
	return 0;
}
