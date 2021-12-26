// 3. Write a program in C to display n terms of natural number and their sum.

#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter the n term of natural number = ");
    scanf("%d", &n);

    printf("all natural number =");

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
        printf("%d, ", i);
    }
    printf("\nThe sum of all natural number = %d", sum);

    return 0;
}
