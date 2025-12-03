#include<stdio.h>
int main(){
	int m=10;
	int n1,n;
	n = ++m;
	n1=m++;
	n--;
	--n1;
	n-=n1;
	printf("%d",n);
}
