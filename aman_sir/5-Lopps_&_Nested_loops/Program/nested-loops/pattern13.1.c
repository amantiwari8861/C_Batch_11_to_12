#include <stdio.h>

int main()
{
    int n;
    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            if (i>0 && i<=8)
            {
                n=9;
                n=n-i;
            }
            if (i == 0 || i == 9 || j == 0 || j == 9 || i == j || j==n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }

    return 0;
}
