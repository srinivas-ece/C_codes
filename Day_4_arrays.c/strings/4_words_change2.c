#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	printf("enter a string: ");
	fgets(string,100,stdin);

	printf("Given String: %s",string);

	int length = strlen(string);
	printf("\nstring length is %d\n",length);
	
	int last = length,i;
	string[length-1]='\0';


	for(i=length-1;i>=0;i--){
		if(string[i]==' ')
		{
			for(int j=i;j<=last;j++){
				printf("%c",string[j]);
			}
			last=i;
		}
	}

	for(int k=0;k<last;k++){
		printf("%c",string[k]);
	}
	return 0;
}
