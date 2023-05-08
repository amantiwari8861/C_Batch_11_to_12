#include<stdio.h>
int main()
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 4; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}
