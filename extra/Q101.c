#include<stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int space = 1; space <i; space++)
        {
            printf(" ");
        }
        for (int star = 5; star >= i; star--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
