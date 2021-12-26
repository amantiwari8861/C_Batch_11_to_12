// 7. Write a program in C to display the multipliaction table vertically from 1 to n.

#include <stdio.h>

int main()
{
    int num1, num2, table = 0;

    printf("Input upto the table number starting from = ");
    scanf("%d", &num1);
    printf(" to : ");
    scanf("%d", &num2);

    printf("The table of %d = ", num1);

    for (; num1 <= num2; num1++)
    {
        if (num1 >= 1)
        {
            for (int i = 1; i <= 10; i++)
            {
                table = num1 * i;
                printf("\n\t \t%d * %d = %d \t", num1, i, table);
            }
        }
    }

    return 0;
}