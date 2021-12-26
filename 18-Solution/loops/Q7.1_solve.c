// 7. Write a program in C to display the multipliaction table vertically from 1 to n.

#include <stdio.h>

int main()
{
    int num1, num2, table = 0;

    printf("Input upto the table number starting from = ");
    scanf("%d", &num1);
    printf(" to : ");
    scanf("%d", &num2);

    printf("The table form %d to %d = \n", num1,num2);

    for (int i = 1; i <= 10; i++)
    {
        for (int  j= num1; j <= num2; j++)
        {
            table=j*i;
            printf("%d * %d = %d   ",j,i,table);
        }
        printf("\n");
        
    }
    

    return 0;
}