#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

struct _stack{
	int top;
	int size;
	int* s;
};

struct _stack std;

int isfull(){
	if(std.top==std.size-1){
		return 1;
	}else{
		return 0;
	}
}

int isempty(){
	if(std.top==-1){
		return 1;
	}else{
		return 0;
	}
}

int push(int x){
	if(isfull()==0){
		std.s[++std.top]=x;
	}else{
		printf("the stack is full");
	}
}

int pop(){
	if(isempty()==0){
	         //x=std.s[std.top];
		std.top--;
	}else{
		printf("the stack is empty");
	}
	return std.s[std.top];
}

int peek(){
	printf("peek function start");
	printf("\npeek:%d",std.top);
}




int main(){
	std.top=-1;
	std.size=0;
	std.s=NULL;
	int n;
	printf("enter size: ");
	scanf("%d",&std.size);
	std.s=(int*)calloc(std.size,sizeof(std.top));
	while(1){
		printf("\n1)push\n2)POP\n3)peek\n4)view stack\nselect your option: ");
		int num;
		scanf("%d",&num);
		if(num==1){
			printf("enter pushing value: ");
			int pu;
			scanf("%d",&pu);
			push(pu);
		}else if(num==2){
			pop();
		}else if(num==3){
			peek();
		}else if(num==4){
				  printf("\n____");
			for(int i=0;i<std.top;i++){
				printf("\n| %d |\n____\n",std.s[i]);
			}
		}
	}
	return 0;
}

