#include<stdio.h>
int main()
{
    for (int row = 0; row < 5; row++)
    {
        for (int sp = 5-1; sp > row; sp--)
        {
            printf(" ");
        }
        for (int j = 0; j <=row; j++)
        {
            printf("%d",j+1);
        }
        for (int k = row; k > 0; k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    
    return 0;
}
