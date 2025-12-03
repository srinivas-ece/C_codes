#include<stdio.h>
#include<string.h>

int main(){

	char str1[20]="srinivas";
	char str2[20]="harsha";
// 	stingcompare:
	if(strcmp(str1,str2)==0){
		printf("yes\n");
	}else{
		printf("no\n");
	
	}
//      String Length:
	printf("%s size is %lu\n",str2,strlen(str2));

	//strncpy
	char  str3[8];
	printf("\n%s is copy to %s",str1,strncpy(str3,str1,8));
	str3[8]='\0';


	//strcat
	strcat(str1,str2);
	printf("\nstrcat:%s",str1);


	//strcat 
	
	strncat(str1,str2,6);
	printf("\n strncat: %s",str1); 
	
	//strstr
     	
	printf("\n str str: %s",strstr(str1,"srin"));

//	printf("\nstrrevese:%s",strrev(str1));




	return 0;
}

