#include<stdio.h>
#include<string.h>
struct records{
	
	int age;
	char name[20];
};

struct records display(struct records s){
       	printf("%d",s.age);
        printf("%s",s.name);

	return s;
}

int main(){
	struct records s1;
	s1.age=10;
        strcpy(s1.name," harsha");

	display(s1);
	return 0;
}
