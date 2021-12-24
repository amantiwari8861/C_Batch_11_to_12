#include<stdio.h>

int main()
{
    int k;
    for (int i = 1; i <= 5; i++)
    {
        k=i;
        for (int j = 1; j <= 5; j++)
        {
            printf("%2d   ",k);
            k=k+5;
        }
        printf("\n");
         
    }
    return 0;
}