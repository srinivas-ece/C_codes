#include<stdio.h>
int a,x,y;
#define SQUARE(x) x*x
#define CUBE(y) y*y*y
int main(){
	printf("Enter a number: ");
	scanf("%d",&a);
	printf("Square of %d is %d\ncube of %d is %d\n",a,SQUARE(a),a,CUBE(a));
	return 0;
	
}
