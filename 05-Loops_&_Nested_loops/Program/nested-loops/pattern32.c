#include<stdio.h>

int main()
{
    int n;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%2d ",i%2);
        }
        printf("\n");
    }
    
    return 0;
}
