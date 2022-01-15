#include<stdio.h>

int main()
{
    int k=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            k=k+2;
            printf("%2d   ",k);
        }
        printf("\n");
         
    }
    return 0;
}