#include <stdio.h>
#include<windows.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j<=i ; j++)
        {
            printf("*");
            // Sleep(1000);
        }
        printf("\n");
    }

    return 0;
}
