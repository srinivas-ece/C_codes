#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
struct _stack{
	int top;
	int size;
	char *s;
	char string[200];
};
struct _stack std;

int isfull(){
	if(std.top==std.size-1){
		printf("full:stack is full\n");
		return 1;
	}else{
		printf("full:stack has space\n");
		return 0;
	}
}

int isempty(){
	if(std.top==-1){
		printf("isempty:stack is empty\n");
		return 1;
	}else{
		printf("isempty:stack has space\n");
		return 0;
	}
}

void push(char n){
	if(isfull()==0){
		std.s[++std.top]=n;
	}else{
		printf("stack is full\n");
	}
}

char pop(){
	int x=-1;
	if(isempty()==1){
		printf("stack is empty!\n");
	}else{
		x=std.s[std.top];
		std.top--;
	}
	return x;
	printf("\npop=%c\n",x);
}

char peek(){
	if(isempty()==0){

		printf("%c",std.s[std.top]);
		return std.s[std.top];
	}else{
		printf("peek=stack is empty\n");
	}
}

int preci(char c){
	switch(c){
		case '[':
		case '{':
		case '(':return 0;
		case '+':
		case '-':return 1;
		case '/':
		case '*':return 2;
	}
}

int main(){
	std.top=-1;
	std.size=0;
	std.s=NULL;
	char input[200];
	char output[200];
	printf("enter a string");
	scanf("%s",input);
	char st;
	int j=0;
	int length =strlen(input);
	std.size=length;
	std.s=(char*)malloc(length*sizeof(char));
	for(int i=0;i<length;i++){
		st=input[i];
		switch(st){
			case '(':
			case '[':
			case '{':push(st);
				 break;
			case ')':while(isempty()==0 && peek()!='('){
				output[j++]=pop();
				 }
				if(isempty()==0){
					pop();
				}
				break;
				
				 
			case '*':
			case '/':
			case '+':
			case '-':while(isempty()==0&&preci(peek())>=preci(st)){
					 output[j++]=pop();
				 }
				 push(st);
				 break;
			default:output[j++]=st;
				 break;
		}
	}

	while(isempty()==0){
		output[j++]=pop();
	}

		printf("%s",output);
		return 0;
	
}
		





/*
int main(){
	std.top=-1;
	std.size=0;
	std.s=NULL;
	int flag=0;
	char st[200];
	char ch;
	printf("enter a string:");
	scanf("%s",st);
	int length=strlen(st);
	std.size=length;
	std.s=(char*)malloc(std.size*sizeof(char));
	for(int i =0;i<length;i++){
		ch=st[i];
		printf("%c",ch);
		switch(ch){
			case '(':
			case '[':
			case '{':push(ch);
				break;
			case')':if(ch==')' && peek()=='('){
					pop();
				}else{
					flag=1;
					printf("flag is 1");
				}
				break;
			default:break;
				}
	}

	if(flag==1){
		printf("\nunbalanced");
	}else if(isempty()==1){
		printf("\nbalanced");
	}
	return 0;
}
*/

		



