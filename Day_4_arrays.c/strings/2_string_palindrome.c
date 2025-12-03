#include<stdio.h>
#include<string.h>
int main()
{
	char array[20];
	char original[20];
	printf("Enter a Word:");
	scanf("%s",array);
	strcpy(original,array);
	int n=strlen(array);

        int j=n-1;
        char temp;
	int i=0;
	
        while(i<n/2)
        {
                temp = array[i];
                array[i]=array[j];
                array[j]=temp;
          i++;
          j--;
        }
        
	if(strcmp(original,array)==0)
	{
		printf("%s is a palindrome string",array);
	}
	else
	{
		printf("it is not palindome string");
	}

	return 0;
}
