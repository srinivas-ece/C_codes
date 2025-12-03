#include <stdio.h>
#include <string.h>

int main() 
{
    char str[] = "Hello welcome to C programming!";
    char substr[] = "welcome";
    //strstr
    char *result = strstr(str,substr);
    printf("%s",result);
 
    
    
      //strlen
    printf("\n%ld\n",strlen(str));
    
    //strcpy
    printf("%s\n",strcpy(str,substr));

    
    return 0;
}

