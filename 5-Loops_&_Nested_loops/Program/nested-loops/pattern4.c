#include<stdio.h>

int main()
{
    int r;
    printf("Enter the highest pattern value = ");
    scanf("%d",&r);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < r-1; i++)
    {
        for (int j = r-1; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
