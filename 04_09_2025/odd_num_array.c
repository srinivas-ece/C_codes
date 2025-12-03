#include<stdio.h>
#define size 100
int main(){
	int a;
	int array[size];
	printf("Enter How many numbers you want to enter:");
	scanf("%d",&a);
	printf("%d",size);
	for(int i=0;i<=a;i++){
		int c=i;
	printf("Enter value %d :",c);
	scanf("%d",&array[i]);
	}

	for(int j=0;j<=a;j++){
		if(array[j]%2!=0){
			printf("odd: %d\n",array[j]);
		}
	}
	return 0;
}
