#include<stdio.h>
#include<stdlib.h>
struct student{
	int a;
	float b;
	char d[20];
};

int main(){
	int n;
	printf("Enter size of class");
	scanf("%d",&n);
	struct student *s=(struct student*)malloc(n*sizeof(struct student));
	for(int i =0;i<n;i++){
		scanf("%d",&(s+i)->a);
	}
	return 0;
}

