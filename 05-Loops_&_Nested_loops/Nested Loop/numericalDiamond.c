#include<stdio.h>

int main()
{
    int num;
    printf("enter num:");
    scanf("%d",&num);
    for (int row = 1; row <= num; row++)
    {
        for (int space = num-1; space >=row; space--)
        {
            printf(" ");
        }
        for (int i = 1; i <= row; i++)
        {
            printf("%d ",i);
        }    
        printf("\n");
    }
    for (int row = 1; row <= num; row++)
    {
        for (int k = 0; k < row; k++)
        {
            printf(" ");
        }
        for (int j = num-row; j >=1; j--)
        {
            printf(" %d",j);
        }  
        printf("\n");
    }
    return 0;
}
