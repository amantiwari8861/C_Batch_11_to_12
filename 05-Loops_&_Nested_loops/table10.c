#include<stdio.h>
int main()
{
     for (int i = 1; i <= 10; i++)
    {
        printf("%2d X%2d = %2d ", 1, i, 1 * i);
        printf("%2d X%2d = %2d ", 2, i, 2 * i);
        printf("%2d X%2d = %2d ", 3, i, 3 * i);
        printf("%2d X%2d = %2d ", 4, i, 4 * i);
        printf("%2d X%2d = %2d ", 5, i, 5 * i);
        printf("%2d X%2d = %2d ", 6, i, 6 * i);
        printf("%2d X%2d = %2d ", 7, i, 7 * i);
        printf("%2d X%2d = %2d ", 8, i, 8 * i);
        printf("%2d X%2d = %2d ", 9, i, 9 * i);
        // printf("%2d X%2d = %2d ", 10, i, 10 * i);
        printf("\n");
    } 


    
    // int num;
    // printf("Enter a number: ");
    // scanf("%d", &num);
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%2d X%2d = %2d ", num, i, num * i);
    // }
    return 0;
}
