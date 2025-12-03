#include<stdio.h>

int gcd(int x, int y);

int main() 
{
    int num1, num2;
    printf("Enter first value: ");
    scanf("%d", &num1);
    printf("Enter second value: ");
    scanf("%d", &num2);

    int d = gcd(num1, num2);
    printf("GCD = %d\n", d);

    return 0;
}

int gcd(int x, int y) 
{
    if (x == 0)
    {
        return y;
    }
    return gcd(y%x,x);
}

