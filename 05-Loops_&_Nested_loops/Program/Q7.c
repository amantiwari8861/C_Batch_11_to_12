#include <stdio.h>
#include <windows.h>
int main()
{

    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %2d=%2d ", 1, i, i * 1);
        printf("%d X %2d=%2d ", 2, i, i * 2);
        printf("%d X %2d=%2d ", 3, i, i * 3);
        printf("%d X %2d=%2d ", 4, i, i * 4);
        printf("%d X %2d=%2d ", 5, i, i * 5);
        printf("%d X %2d=%2d ", 6, i, i * 6);
        printf("%d X %2d=%2d ", 7, i, i * 7);
        printf("%d X %2d=%2d ", 8, i, i * 8);
        printf("%d X %2d=%2d ", 9, i, i * 9);
        // printf("%dX%2d=%2d ", 10, i, i * 10);
        printf("\n");
    }

    // __1
    // _10
    // 100

    return 0;
}
