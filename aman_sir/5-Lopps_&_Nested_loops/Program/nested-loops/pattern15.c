#include <stdio.h>

int main()
{

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (i == 3 || j == 3)
            {
                printf("* ");
            }
            else
            {
                if (i == 1 && (j >= 2 && j <= 4))
                {
                    printf("* ");
                }
                else
                {
                    if (i == 2 && (j >= 1 && j <= 5))
                    {
                        printf("* ");
                    }
                    else
                    {
                        if (i == 3 && (j >= 0 && j <= 6))
                        {
                            printf("* ");
                        }
                        else
                        {
                            printf("  ");
                        }
                    }
                }
            }
        }
        printf("\n");
    }

    return 0;
}
