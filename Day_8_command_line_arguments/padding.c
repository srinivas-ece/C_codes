#include<stdio.h>
#include<ctype.h>
struct size{
	char num;
	int n;
	char a;
};


int main(){
	struct size s;
	printf("%zu",sizeof(struct size));
	return 0;
}
