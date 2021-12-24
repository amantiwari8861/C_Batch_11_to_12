#include <stdio.h>

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            /*  if (i==0 || i==1 || i==9 || i==10 || j==0 || j==1 || j==9 || j==10)
             {
                 printf("* ");
             }
             else
             {
                 printf("  ");
             } */

            if ((i == 2 || i == 3) && (j == 2 || j == 3 || j == 7 || j == 8))
            {
                printf("  ");
            }
            else
            {
                if ((i == 6 || i == 7 || i == 8) && (j >= 3 && j <= 7))
                {
                    printf("  ");
                }
                else
                {
                    printf("* ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
