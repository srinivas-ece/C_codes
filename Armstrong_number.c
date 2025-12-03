#include <stdio.h>

int power(int pow, int num);

int main()
{
    int remainder, num, num1, digits = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    num1 = num;

    // count digits
    int temp = num;
    while (temp != 0)
    {
        temp /= 10;
        digits++;
    }

    // calculate sum of powers of digits
    temp = num;
    while (temp > 0)
    {
        remainder = temp % 10;
        sum += power(digits, remainder);
        temp /= 10;
    }

    if (sum == num1)
        printf("%d is an Armstrong number.\n", num1);
    else
        printf("%d is not an Armstrong number.\n", num1);

    return 0;
}

int power(int pow, int num)
{
    int result = 1;
    for (int i = 0; i < pow; i++)
    {
        result *= num;
    }
    return result;
}

