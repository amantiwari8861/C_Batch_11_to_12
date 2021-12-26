// 8. Write a program in C to display the n terms of odd natural number and their sum .

#include <stdio.h>

int main()
{
    int n, odd = 0, sum = 0;

    printf("Enter the n term of natural number = ");
    scanf("%d", &n);

    printf("All natural number =");

    for (int i = 1; i <= n; i++)
    {
        printf("%d,", i);
    }

    printf(" \nAll odd numbers are = ");

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
            printf("%d,", i);
        }
    }
    printf("\nThe sum of all natural number = %d", sum);

    return 0;
}