#include<stdio.h>
int main()
{
    int matr1[2][3];

    printf(" enter the elements in matrix :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&matr1[i][j]);
        }
    }
    printf(" the array elements are :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",matr1[i][j]);
        }
        printf("\n");
    }
    
    


    return 0;
}
