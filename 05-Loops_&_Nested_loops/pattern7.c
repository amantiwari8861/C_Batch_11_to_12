#include<stdio.h>
int main()
{
    int num;
    printf("enter num:");
    scanf("%d",&num);//5

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = num; k > i; k--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
