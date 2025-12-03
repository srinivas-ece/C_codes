#include<stdio.h>

struct a{
	int a:2;
};

int main(){
	struct a s1;
	s1.a=5;
	printf("%d",s1.a);
	return 0;
}
