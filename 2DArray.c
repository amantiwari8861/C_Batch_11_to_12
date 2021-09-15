#include<stdio.h>
int main()
{
    int matr[2][3];
    printf("enter the matrix \n");

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&matr[i][j]);
        }
    }
     for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf(" %d \t",matr[i][j]);
        }
        printf("\n");
    }
    return 0;
}