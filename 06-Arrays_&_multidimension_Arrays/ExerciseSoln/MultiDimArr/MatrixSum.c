// A matrix can only be added to (or subtracted from) another 
// matrix if the two matrices have the same dimensions .
//  To add two matrices, just add the corresponding entries, 
//  and place this sum in the corresponding position in the matrix which results.
#include<stdio.h>
int main()
{
    int r1,c1,r2,c2;
    printf("enter the row and column of first matrix \n");
    scanf("%d%d",&r1,&c1);
    printf("enter the row and column of second matrix \n");
    scanf("%d%d",&r2,&c2);

    if(r1==r2 && c1==c2)
    {
        int matr1[r1][c1],matr2[r2][c2],matr3[r1][c1];
        printf("enter the elements in 1st matrix \n");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                scanf("%d",&matr1[i][j]);
            }
        }
        printf("enter the elements in 2nd matrix \n");
        for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
                scanf("%d",&matr2[i][j]);
            }
        }
        //------------------------------------------------
        //logic
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                matr3[i][j] = matr1[i][j] + matr2[i][j];
            }
        }
        //___________________________________________________
        printf("the resultant matrix is :\n");
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                printf(" %d \t",matr3[i][j]);
            }
            printf("\n");
        }

    }
    else
    {
        printf("addition not possible \n");
    }
    return 0;
}


// subtract , transpose, multiplication of 2 matrix