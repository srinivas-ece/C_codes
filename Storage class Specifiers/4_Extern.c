#include<stdio.h>
#include"extern2.c"
extern int a;
void test();

int main()
{
	test();
        printf("%d",a);
}

void test()
{
      printf("%d",++a);
}
