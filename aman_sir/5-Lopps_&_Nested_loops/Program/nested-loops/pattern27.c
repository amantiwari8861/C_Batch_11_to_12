#include <stdio.h>

int main()
{
    int n = 0, k=1;
    for (int i = 1; i <= 5; i++)
    {
        n = k;
        for (int j = 1; j <= 5; j++)
        {
            printf("%2d ", n);
            n = n + 2;
        }
        printf("\n");
        k += 2;
    }

    return 0;
}
