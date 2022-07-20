#include<stdio.h>
// void inputMatr(int,int,int[][100]);
// void matrMulti(int,int,int,int,int[][100],int[][100],int[][100]);
// // void printMatr(int,int,int[][100]);
// void printMatr(int r,int c,int matr[r][c]);

void inputMatr(int r,int c,int matr[r][c])
{
    int i,j;
    printf("enter the elements of matr \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&matr[i][j]);
        }
    }
}
void matrMulti(int r1,int c1,int r2,int c2,int matr1[r1][c1],int matr2[r2][c2],int matr3[r1][c2])
{
    int i,j,k;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            matr3[i][j]=0;
            for(k=0;k<c1;k++)
            {
                matr3[i][j]+=matr1[i][k]*matr2[k][j];
            }
        }
    }
}
void printMatr(int r,int c,int matr[][100])
{
    printf("\n----------------------------------------\n");
    int i,j;
    printf("the Matrix is \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%3d ",matr[i][j]);
        }
        printf("\n");
    }
    printf("\n----------------------------------------\n");
}


int main()
{
    int matr1[100][100], matr2[100][100], matr3[100][100];
    int r1,c1,r2,c2;//row and column of matr1 and matr2

    printf("enter the row and column of matr1 \n");
    scanf("%d %d",&r1,&c1);
    printf("enter the row and column of matr2 \n");
    scanf("%d %d",&r2,&c2);  

    if(c1==r2)
    {
        inputMatr(r1,c1,matr1);
        printMatr(r1,c1,matr1);
        inputMatr(r2,c2,matr2);
        printMatr(r2,c2,matr2);
        matrMulti(r1,c1,r2,c2,matr1,matr2,matr3);
        printf("the result of multiplication is \n");
        printMatr(r1,c2,matr3);
    }
    else
    {
        printf("the multiplication is not possible \n");
    }
    
    return 0;
}
