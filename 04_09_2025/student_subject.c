#include<stdio.h>
#define stu 3
#define sub 4
int main(){
	int array[stu][sub];
	for(int i=0;i<stu;i++){
		for(int j=0;j<sub;j++){
			printf("enter the stu%d sub %d markes  :",i,j);
			scanf("%d",&array[i][j]);
		}
	}


	printf("markes for student:\n");
	printf("student\tsubject1\tsubject2\tsubject3");

	for(int i=0;i<stu;i++){
		printf("student %d: ",i);
		for(int j=0;j<sub;j++){
			printf("%d\t",array[i][j]);
		}
		printf("\n");
	}
	return 0;
}
		
