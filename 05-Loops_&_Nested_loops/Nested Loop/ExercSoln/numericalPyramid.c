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
        for (int j = 1; j <= row; j++)
        {
            printf("%d",j);
        }
        for (int k = row-1; k >=1; k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}
