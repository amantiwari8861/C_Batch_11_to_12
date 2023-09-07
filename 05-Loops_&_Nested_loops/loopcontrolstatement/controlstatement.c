#include<stdio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i==5)
        {
            // printf("skipping the 5th step in loop\n");
            continue;
        }
        printf(" i = %d\n", i);
    }
    printf("ending");

    return 0;
}