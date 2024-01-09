#include <stdio.h>
int main()
{
    int num, sum = 0;
    // printf("enter a number:");
    // scanf("%d",&num);// eg. 28

    // for (int i = 1; i < num; i++)
    // {
    //     if (num%i==0)
    //     {
    //         printf(" %d ",i);
    //         sum=sum+i;
    //     }
    // }

    // if (sum==num)
    // {
    //     printf("\n %d is perfect no. \n",num);
    // }
    // else
    // {
    //     printf("\n %d is not a perfect no. \n",num);
    // }

    for (int i = 1; i <= 10000; i++)
    {
        sum = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                // printf(" %d ", j);
                sum = sum + j;
            }
        }
        if (sum == i)
        {
            printf("\n %d is perfect no.", i);
        }
        // else
        // {
        //     printf("\n %d is not a perfect no.", i);
        // }
    }

    return 0;
}
