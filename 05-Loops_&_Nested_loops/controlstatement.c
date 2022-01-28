#include<stdio.h>
int main()
{
    aman:
    for (int i = 1; i <= 10; i++)
    {
        if (i==5)
        {
        //    break;
            // continue;
            goto aman;
        }
        printf(" i = %d\n", i);
    }
    // aman:
    printf("ending");

    return 0;
}
