#include <stdio.h>

int main()
{
    int num, count = 0;
    printf("enter num:");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf(" %d %% %d \n", num, i);
            count++;
            if (count > 2)
            {
                break;
            }
        }
    }
    // printf(" count = %d \n",count);

    if (count > 2)
    {
        printf("Not a Prime number ");
    }
    else
    {
        printf("Prime No.");
    }

    return 0;
}
