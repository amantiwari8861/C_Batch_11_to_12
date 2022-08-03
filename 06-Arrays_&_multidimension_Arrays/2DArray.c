#include<stdio.h>
int main()
{
    int matr[2][3];
    printf("enter the matrix \n");

    for(int i=0;i<2;i++) //for row
    {
        for(int j=0;j<3;j++) //for column
        {
            scanf("%d",&matr[i][j]);
        }
    }
    printf("the entered matrix is :\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\t %d",matr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//sub 4
