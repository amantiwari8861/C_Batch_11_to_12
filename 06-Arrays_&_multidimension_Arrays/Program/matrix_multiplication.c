#include<stdio.h>

int main()
{
    int matr1[3][3],matr2[3][3],matr3[3][3];
    printf("enter the matrix 1 \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&matr1[i][j]);
        }
    }
    printf("enter the matrix 2 \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&matr2[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matr3[i][j]=matr1[i][j]+matr2[i][j];   
        }
    }
    printf(" the resultant matrix is \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" \t %d ",matr3[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}