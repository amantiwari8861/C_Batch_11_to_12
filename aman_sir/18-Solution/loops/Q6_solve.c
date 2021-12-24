// 6. Write a program in C to display the multiplication table of a given integer.

#include <stdio.h>

int main()
{
    int num, table = 0;

    printf("Enter any number = ");
    scanf("%d", &num);

    printf("The table of %d = ", num);

    for (int i = 1; i <= 10; i++)
    {
        table = num * i;
        printf("\n\t \t%d * %d = %d", num, i, table);
    }

    return 0;
}
