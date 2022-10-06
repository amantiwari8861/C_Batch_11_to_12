#include<stdio.h>
int main()
{
    int row,col;
    printf("enter the row and column of 1st matrix :\n");
    scanf("%d%d",&row,&col);
    int mymatr[row][col],sum=0;
    printf("enter the elements of matrix one :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&mymatr[i][j]);
        }  
    }
    //logic
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum=sum+mymatr[i][j];
        }
    }
    printf("\n\n\t\t the sum of matrix is %d \n\n\n",sum);
    return 0;
}
