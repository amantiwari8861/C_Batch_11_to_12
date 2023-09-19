#include <stdio.h>
#include<windows.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf("*");
            Sleep(1000);
        }
        printf("\n");
    }

    return 0;
}
