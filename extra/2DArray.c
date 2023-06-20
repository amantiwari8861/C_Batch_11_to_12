#include<stdio.h>
int main()
{
    int matrix[2][3]; //to declare the 1st matrix
    // int matrix[2][3]={{10,20,30},{40,50,60}}; //to initialize the matrix
    // matrix[0][0]=10;
    printf("enter 6 elements :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("the matrix is :\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t",matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
