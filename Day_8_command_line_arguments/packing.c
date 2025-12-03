#include<stdio.h>
#pragma pack(8)
struct test{
	long int a;
	char b;
	float c;
};

int main(){
	struct test s;
	printf("%ld",sizeof(s));
	return 0;
}
