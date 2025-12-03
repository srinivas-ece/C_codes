#include<stdio.h>

void test(){
      static int c=20;
      c++;
      c++;
      printf("%d\n",c);
}

int main(){
        test();
        test();
        test();
        return 0;
}

