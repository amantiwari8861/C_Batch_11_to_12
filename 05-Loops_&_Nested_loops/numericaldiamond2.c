#include<stdio.h>

int main()
{
    int num;
    printf("enter num:");
    scanf("%d",&num);
    for (int row = 1; row <= num*2; row++)
    {
        for (int space = num-1; space >=row/2; space--)
        {
            printf(" ");
        }
        for (int i = 1; i <= row/2; i++)
        {
            printf("%d ",i);
        }    
        if(row > row/2)
        {
            for (int k = 0; k < row/2; k++)
            {
                printf("$");
            }
            for (int j = num-row/2; j >=1; j--)
            {
                printf("%d",j);
            } 
        }
        printf("\n");
    }
    return 0;
}
