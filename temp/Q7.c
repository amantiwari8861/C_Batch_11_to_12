#include <stdio.h>
int main()
{
    // Write a program in C to display the multipliaction table vertically from 1 to 8.
    // Test Data :
    // Input upto the table number starting from 1 : 8
    // Expected Output :
    // Multiplication table from 1 to 8
    // 1x1 = 1, 2x1 = 2, 3x1 = 3, 4x1 = 4, 5x1 = 5, 6x1 = 6, 7x1 = 7, 8x1 = 8
    // ...
    // 1x10 = 10, 2x10 = 20, 3x10 = 30, 4x10 = 40, 5x10 = 50, 6x10 = 60, 7x10 = 70, 8x10 = 80

    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%2d X%2d =%2d  ", 1, i, 1 * i);
    //     printf("%2d X%2d =%2d  ", 2, i, 2 * i);
    //     printf("%2d X%2d =%2d  ", 3, i, 3 * i);
    //     printf("%2d X%2d =%2d  ", 4, i, 4 * i);
    //     printf("%2d X%2d =%2d  ", 5, i, 5 * i);
    //     printf("%2d X%2d =%2d  ", 6, i, 6 * i);
    //     printf("%2d X%2d =%2d  ", 7, i, 7 * i);
    //     printf("%2d X%2d =%2d  \n", 8, i, 8 * i);
    // }

    // printf("%5d \n",1); 
    // printf("%5d \n",10);
    // printf("%5d \n",100);
    // printf("%5d \n",1000);
    // printf("%5d \n",10000);

    for (int i = 1; i <= 100; i++)
    {
        printf("%d.Pooja \n",i);
    }

    return 0;
}