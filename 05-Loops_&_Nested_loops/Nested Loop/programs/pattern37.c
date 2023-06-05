#include<stdio.h>

int main()
{
    int n;
    for (int i = 0; i < 5; i++)
    {
        n=65;
        for (int j = 0; j < 5; j++)
        {
            printf("%c ",n);
            n++;
        }
        printf("\n");
    }
    
    return 0;
}