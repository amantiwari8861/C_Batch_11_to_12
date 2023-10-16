#include<stdio.h>
int main()
{
    int row,col,countEven=0;
    printf("enter row & col of matrix \n");
    scanf("%d%d",&row,&col);

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
            if (matrix[i][j]%2==0)
            {
                printf("it is even \n");
                countEven++;
            }
        }
    }
    
    printf("total even no. is %d \n",countEven);

    return 0;
}
