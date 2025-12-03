#include<stdio.h>

void test()
{
  auto int c=20;
  c++;
  c++;
  printf("%d\n",c);
}

int main()
{
	test();
	test();
	test();
	return 0;
}
