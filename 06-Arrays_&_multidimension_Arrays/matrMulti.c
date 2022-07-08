#include<stdio.h>
int main()
{
    // the number of columns in the first matrix is equal
    //  to the number of rows in the second matrix.
    // If the product is defined, the resulting matrix will have the
    //  same number of rows as the first matrix
    // and the same number of columns as the second matrix.

    int r1,c1,r2,c2;
    printf("enter the row and column of first matrix \n");
    scanf("%d%d",&r1,&c1);
    printf("enter the row and column of second matrix \n");
    scanf("%d%d",&r2,&c2);

    // 2*3  X 4*3  = not possible
    // 2*3 x 3*4  = possible (resultant matrix dimensions will be 2*4)

    if(c1==r2)
    {
        printf("Multiplication is possible \n");
        int matr1[r1][c1],matr2[r2][c2],matr3[r1][c2];

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
        //logic  let r1=2,r2=3,c1=3,c2=4
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                matr3[i][j]=0;
                for (int k = 0; k < c1; k++)
                {
                    matr3[i][j]=matr3[i][j]+ matr1[i][k]*matr2[k][j];
                }
            }  
        }
        //-------------------------------------------------
        printf("the resultant matrix is :\n");
        for(int i=0;i<r1;i++)
        {  
            for(int j=0;j<c2;j++)
            {
                printf(" %d \t",matr3[i][j]);
            }
            printf("\n");
        }
    }
    else
    {  
        printf("Multiplication is not possible \n");
    }
    return 0;
}