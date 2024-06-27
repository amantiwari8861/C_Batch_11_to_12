#include <stdio.h>
int main()
{
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            if (i % 2 != 0)
            {
                if (j < i)
                {
                    printf(" ");
                }
                if (j >= i)
                {
                    printf("* ");
                }
            }
        }
        if (i % 2 != 0)
            printf("\n");
    }
    return 0;
}
