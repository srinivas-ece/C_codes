#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct _stack {
    int top;
    int size;
    char *s;
    char string[200];
};

struct _stack std;

int isfull() {
	if(std.top==std.size -1){
		printf("full");
		return 1;
	}else{
		return 0;
	}
}

int isempty() {
    return std.top == -1;
}

void push(char x) {
    if (isfull()==0) {
        std.s[++std.top] = x;
    } else {
        printf("The stack is full\n");
    }
}

char pop() {
	char x=-1;
    if (isempty()==0) {
        x= std.s[std.top];
	std.top--;
    } else {
        printf("The stack is empty\n");
    }
    return x;
}

char peek() {
	int x=-1;
    if (!isempty()) {
        return std.s[std.top];
    } else {
	 printf("it is empty");
    
    }
    return x;
}

int main() {
    std.top = -1;
    std.size = 0;
    std.s = NULL;
    int flag = 0;

    printf("Enter a brackets string: ");
    scanf("%s", std.string);

    std.size = strlen(std.string); 
    std.s = (char *)malloc(std.size * sizeof(char));
    if (!std.s) {
        printf("Memory allocation failed\n");
        return 1;
    }
	int i;
    for (i = 0; i < std.size; i++) {
        char ch = std.string[i];
        switch (ch) {
            case '(':
            case '{':
            case '[':
                push(ch);
                break;

            case ')':
                if (peek() == '(') {
                    pop();
                } else {
                    flag = 1;
                }
                break;

            case '}':
                if (peek() == '{') {
                    pop();
                } else {
                    flag = 1;
                }
                break;

            case ']':
                if (peek() == '[') {
                    pop();
                } else {
                    flag = 1;
                }
                break;

            default:
                break;
        }
    }

    if (flag == 1) {

        printf("Unbalanced\n");
    } else if(i==std.size&&isempty()){
        printf("Balanced\n");
    }else{
      printf("not balance");
    }

    free(std.s);
    return 0;
}

