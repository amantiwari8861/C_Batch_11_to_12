// 2. Write a C program to find the sum of first 10 natural numbers.

#include <stdio.h>

int main()
{
    int sum = 0;
    printf("The sum of first 10 natural number = ");

    for (int i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);

    return 0;
}
