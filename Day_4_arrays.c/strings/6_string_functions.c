#include<stdio.h>
#include<string.h>
int main()
{
	char buff[20];
	int x=10;
	float y=20.2222;
	char name[]="harsha";
	sprintf(buff,"%d,%f,%s",x,y,name);
	printf("%s",buff);

	//strncat
	char name1[]="harsha";
	char name2[]="vardhan";
	strncat(name1,name2,2);
	printf("\n%s\n%s\n",name1,name2);

	//sscanf
	#include <stdio.h>

 
    float b;
    int c;
    char a[20];

    char data[] = "my 5.8 22";
    sscanf(data, "%s %f %d", a, &b, &c);

    printf("a = %s, b = %f, c = %d\n", a, b, c);
	char string[]="my name is harsha vardhan ,my age is 21,height 5.8";
	sscanf(string,"my name is %s,my age is %d,height %f",a,&c,&b);
	printf("name=%s\nAge=%d\nHeight=%.1f",a,c,b);
 


	return 0;
}

