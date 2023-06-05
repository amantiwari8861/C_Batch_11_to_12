#include<stdio.h>

int main()
{
    int k=0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            k=i*j;
            printf("%2d   ",k);
        }
        printf("\n");
         
    }
    return 0;
}