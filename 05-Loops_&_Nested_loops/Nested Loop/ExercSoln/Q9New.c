#include<stdio.h>
int main()
{
    
    for (int row = 1; row <= 7; row++)
    {
        for (int col = 1; col <= 10 ; col++)
        {
            if (row==1 || row==7)
            {
                printf("*");
            }
            else
            {
                if (col==1 || col==10)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    

    return 0;
}
