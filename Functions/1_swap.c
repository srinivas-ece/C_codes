#include<stdio.h>
void swap();
int a=10;
int b=20;

int main()
{
	printf("before swaping :\na=%d\nb=%d\n",a,b);
	swap(a,b);
	printf("after swaping :\na=%d\nb=%d",a,b);
	return 0;
}

void swap(int x, int y)
{
   int temp = a;
   a=b;
   b=temp;
}
// for refrence


#include<stdio.h>
int swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main(){
    int a=10,b=20;
    swap(&a,&b);
     printf("%d %d",a,b);
    return 0;
}

