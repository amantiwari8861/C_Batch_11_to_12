#include <stdio.h>

int main()
{
    int k = 0, l = 0, n = 5;

    for (int i = n; i >= 1; i--)
    {
        k = i;
        l = (n * 2) - (i - 1);
        for (int j = 1; j <= n; j++)
        {
            if (j % 2 == 1)
            {
                printf("%2d ", k);
                k = k + 10;
            }
            else
            {
                printf("%2d ", l);
                l = l + 10;
            }
        }
        printf("\n");
    }

    return 0;
}
