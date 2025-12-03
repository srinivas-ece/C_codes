#include<stdio.h>
enum status{on,off,blink};

int main(){
	enum status control;
	control = off;
	if(control==off){
		printf("yes");
	}
	printf("num value:%d",control);
	return 0;
}
