#include<stdio.h>
void printMatrix(int row,int col,int matrix[row][col])
{
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
           printf(" \t %d", matrix[i][j]);
       }
       printf("\n");
    }
}
int main()
{
    int matrix[3][3];
   printf("enter the elements of the matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }
    printf("the matrix is\n");
    printMatrix(3, 3,matrix);
    int matrix2[2][4]={12,34,56,34,56,78,34,56};
    printf("the 2nd matrix is\n");
    printMatrix(2, 4,matrix2);
    return 0;
}