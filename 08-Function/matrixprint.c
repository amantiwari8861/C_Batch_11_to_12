#include<stdio.h>
void input(int row,int col,int[][]);
void print(int row,int col,int[][]);
int main()
{
    int row,col;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d%d",&row,&col);
    int matr[row][col];
    input(row,col,matr);
    print(row,col,matr);
    return 0;
}

void input(int row,int col,int matr[row][col])
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter the element at %d row and %d column: ",i+1,j+1);
            scanf("%d",&matr[i][j]);
        }
    }
}
void print(int row,int col,int matr[row][col])
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",matr[i][j]);
        }
        printf("\n");
    }
}
