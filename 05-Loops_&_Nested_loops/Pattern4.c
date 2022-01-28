#include<stdio.h>
int main()
{
    int num;
    printf("enter num:");
    scanf("%d",&num);
    for (int i = 0; i < num; i++)
    {
        for (int j = num-1; j>i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}