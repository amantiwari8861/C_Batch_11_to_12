#include<stdio.h>

int main()
{

    int r;
    printf("Enter the number of row = ");
    scanf("%d",&r);

    for (int i = 0; i < r; i++)
    {
        for (int j = r; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
