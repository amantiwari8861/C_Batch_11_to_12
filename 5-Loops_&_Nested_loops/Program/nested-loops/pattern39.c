#include<stdio.h>

int main()
{
    int n=65;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 'E'; j >= 'A'; j--)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    
    return 0;
}