#include<stdio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i==5)
        {
            // break;
            // continue;
            goto aman;
        }
        printf(" i = %d\n", i);
    }
    printf("ending");

    aman:
    printf("U jumped at the ending !!");
    return 0;
}