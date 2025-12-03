#include<stdio.h>
#include<string.h>
int main(){
	char string[100];
	char arry[100];
	char* d=arry;
	char* c=string;
	printf("enter a word: ");
	scanf("%s",string);
	
	int j=0;

	while(string[j]!='\0'){
		j++;
	}

	printf("length is %d",j);
	int length = j;
	




	printf("size of string is:%d\n",length);
	for(int i =length-1;i>=0;i--){
		arry[i]=*c;
		c++;
	}
	for(int i=0;i<length;i++){
		string[i]=arry[i];
	}
	for(int i=0;i<6;i++){
		printf("%c",*(d+i));
	}
	printf("\n");
	return 0;

}
