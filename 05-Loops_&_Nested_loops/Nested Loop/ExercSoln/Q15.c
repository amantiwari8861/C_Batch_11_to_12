#include<stdio.h>
int main()
{
    int row;
    printf("enter row:");
    scanf("%d",&row);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if ( i==0 || i==row-1 || j==0  || j==row-1 || i==j || i==row-1-j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
   return 0;
}
