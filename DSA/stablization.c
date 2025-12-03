#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

struct _stack{
        int top;
        int size;
        char* s;
	char string[200];
};

struct _stack std;

int isfull(){
        if(std.top==std.size-1){
                return 1;
        }else{
                return 0;
        }
}

char isempty(){
	printf("empty function starts");

        if(std.top==-1){
                return 1;
		printf("it is empty");
        }else{
		printf("it is not empty");
                return 0;
        }
}

void push(char x){
        if(!isfull()){
                std.s[++std.top]=x;
        }else{	
                printf("the stack is full");
        }
}

char pop(){
	char x=-1;
        if(!isempty()){
                 x=std.s[std.top];
                std.top--;
        }else{
                printf("the stack is empty");
        }
        return x;
}

char peek(){
	int x=-1;
        printf("peek function start");
 	if(!isempty()){
		x=std.s[std.top];
	}else{
		printf("it is empty cannot delete");
	}return x;

}




int main(){
        std.top=-1;
	std.size=0;
	std.s=NULL;
	int flag=0;


	printf("enter a brackets string: ");
	scanf("%s",std.string);
	int j;
	printf("%ld",strlen(std.string));
	int length = strlen(std.string);
	std.s=(char*)malloc(length*sizeof(char));
	int i;

	for(i =0;i<strlen(std.string);i++){
		char ch=std.string[i];
		printf("\nchar is %c\n",ch);
		switch(ch){
			case '(':
			case '{':
			case '[':push(ch);
				 break;

			case ')':if(ch==')' && peek()=='(' ){
					 printf("\npeek value is%c\n",peek());
					 pop();
				 }else{
					 flag=1;
					 break;
				 }
			default:break;
		}

		//j=i+1;
	}

	printf("j=%d\nlength=%d\n",j,length);
	if(flag==1){
		printf("its not balanced");


	}
	else if( i==length && isempty() ){
		printf("balanced");
	}else{
		printf("unbalanced");
	}
        return 0;
}


