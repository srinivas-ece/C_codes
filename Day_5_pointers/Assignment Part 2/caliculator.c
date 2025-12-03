#include<stdio.h>
float add(float x,int y){
return x+y;
}

float sub(float x,int y){
	return x-y;
}

float multi(float x,int y){
return x*y;
}

float divi(float x,int y){
        return x/y;
}




int main(){
	int a,b,e;
	printf("enter a&b values:");
	scanf("%d,%d",&a,&b);
	float(*fp[])(float,int)={add,sub,multi,divi};
	printf("select choice:");
	scanf("%d",&e);
	printf("value: %f",(*fp[e])(a,b));
	return 0;
}
