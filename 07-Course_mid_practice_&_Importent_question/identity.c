#include<stdio.h>
int main()
{
    int r,c,isDiagonallyOne=1,isOtherZero=1;
    printf("enter r and c\n");
    scanf("%d%d",&r,&c);
    int matr[r][c];
    printf("enter a matrix\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&matr[i][j]);
        }
    }
    //logic
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(i==j)
            {
                if (matr[i][j]!=1)
                {
                    isDiagonallyOne=0;
                }
            }
            else
            {
                if (matr[i][j]!=0)
                {
                    isOtherZero=0;
                }
            }
        }
        
    }
    if(isDiagonallyOne==0 && isOtherZero==0)
    {
        printf("it is not an identity matrix\n");
    }
    else
    {
        printf("it is an identity matrix\n");
    }
    return 0;
}
