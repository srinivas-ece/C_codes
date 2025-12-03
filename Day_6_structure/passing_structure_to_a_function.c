#include<stdio.h>
#include<string.h>
struct  student{
	int a;
	float b;
	char c[20];
};

void print(struct student *s1){
	printf(" %d \n%f \n%s ",(*s1).a,s1->b,s1->c);
}

int main(){
	struct student s1={111,55.66,"harsha"};
	//s1.a=10;
	//s1.b=22.33;
	//strcpy(s1.c,"harsha");
	print(&s1);
	return 0;
}
