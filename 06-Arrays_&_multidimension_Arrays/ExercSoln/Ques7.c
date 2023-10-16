#include<stdio.h>
int main()
{
    int row,col,isDiagonallyOne=1,isNonDiagonalZero=1;
    printf("enter row & col of matrix \n");
    scanf("%d%d",&row,&col);

    //logic
    if (row==col)
    {
        //printf("it is a square matrix that's why we are checking it is identity matrix or not\n");
        int matrix[row][col];
        printf("enter elements in array\n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                scanf("%d",&matrix[i][j]);
            }
        }
        //logic
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (i==j)
                {
                    //left diagonal
                    if (matrix[i][j]!=1)
                    {
                        isDiagonallyOne=0;
                        break;
                    }
                }
                else
                {
                    //non diagonal
                    if (matrix[i][j]!=0)
                    {
                        isNonDiagonalZero=0;
                        break;
                    }
                }                
            }
        }
        
        if (isDiagonallyOne==1 && isNonDiagonalZero==1)
        {
            printf("identity matrix!!");
        }
        else
        {
            printf("not identity matrix");
        }
    }
    else
    {
        printf("not a square matrix or identity matrix");
    }
    return 0;
}
