#include<stdio.h>
int main()
{
    int matr1[2][3],matr2[2][3],matr3[2][3];

    printf("enter 1st matrix :");
    for (int i = 0; i < 2; i++)//row
    {
        for (int j = 0; j < 3; j++)//column
        {
            scanf("%d",&matr1[i][j]);
        }
    }
    printf("enter 2nd matrix :");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&matr2[i][j]);
        }
    }
    //logic
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matr3[i][j]=matr1[i][j]+matr2[i][j];
        }
    }
    printf("the resultant matrix is :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\t %d",matr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
