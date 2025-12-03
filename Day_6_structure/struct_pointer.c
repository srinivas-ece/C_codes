#include<stdio.h>
struct student{
	int roll;
	char name;
	int a;
};


int main(){
	struct student s1;
	struct student *p1;
	p1=&s1;
	s1.roll=20;
	printf("%d",p1->roll);
	printf("%d",s1.roll);
	return 0; 
}
