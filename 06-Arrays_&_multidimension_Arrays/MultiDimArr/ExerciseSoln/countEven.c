#include<stdio.h>
int main()
{
    
    int row,col,count=0;
    printf("enter row and columns :\n");
    scanf("%d%d",&row,&col);

    int matrix[row][col];

    printf("enter the value in matrix\n");
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
                count++;
            }
        }  
    }
    printf("there are %d even no.\n",count);


    return 0;
}
