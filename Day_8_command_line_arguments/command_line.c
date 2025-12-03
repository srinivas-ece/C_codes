#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("usage: %s num1 num2\n", argv[0]);
        return 1;
    }

    char *endptr1, *endptr2;
    errno = 0;
    long a = strtol(argv[1], &endptr1, 10);
    long b = strtol(argv[2], &endptr2, 10);

    if (*endptr1 != '\0' || *endptr2 != '\0' || errno != 0) {
        printf("Invalid input. Please enter two integers.\n");
        return 1;
    }

    printf("sum = %ld\n", a + b);
    return 0;
}

