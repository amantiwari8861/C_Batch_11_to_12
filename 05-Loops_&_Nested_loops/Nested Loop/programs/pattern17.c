#include<stdio.h>

int main()
{
    int k=1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%2d   ",k);
            k=k+2;
        }
        printf("\n");
         
    }
    return 0;
}