#include<stdio.h>
struct {
	int a;
	float b;
	char c;
}s1;

int main(){
	struct {
        int a,b;
	}s1={10,20};

	printf("%d,%d",s1.a,s1.b);
	return 0;
}
