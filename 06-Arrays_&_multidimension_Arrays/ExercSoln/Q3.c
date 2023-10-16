#include<stdio.h>
int main()
{
    int row,col;
    printf("enter row & column of Matrix \n");
    scanf("%d%d",&row,&col);//let row=3 and col=4

    int matrix[row][col];

    printf("enter the values in matrix");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    
    printf("the matrix is :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf(" %d \t",matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
