#include<stdio.h>
void fun(char *x){
	int length=0;
	while(*(x+length)!='\0'){
		length++;
	}
	char arr[12]="aeiouAEIOU";
	char* e=arr;
	int b=0;
	
        for(int i=0;i<length;i++){
		char c;
		for(int j=0;j<11;j++){
		if(*(e+i)==c){
			b++;
		}
		}
		c=*(x+i);
        }

printf("vowels is:%d",b);

}

int main(){
	char string[100];
	printf("enter a string");
	scanf("%s",string);
//	printf("%s",string);
	fun(string);
	return 0;
}

