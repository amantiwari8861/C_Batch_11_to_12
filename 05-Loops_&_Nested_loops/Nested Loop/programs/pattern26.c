#include<stdio.h>

int main()
{
    int n;
    for (int i = 1; i <= 5; i++)
    {
        n=i;
        for (int j = 1; j <= 5; j++)
        {
            printf("%2d ",n);
            n=n+1;
        }
        printf("\n");
    }
    
    return 0;
}
