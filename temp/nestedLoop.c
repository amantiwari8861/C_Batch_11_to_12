#include<stdio.h>
#include<windows.h>
int main()
{
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("reading chapter %d \n",i);
    //     for (int j = 1; j <= 2; j++)
    //     {
    //         printf("\treading section %d \n",j);
    //         for (int k = 1; k <= 3; k++)
    //         {
    //             printf("\t\treading para %d ",k);
    //         }
    //         printf("\n");
    //     }
    // }
    
    // for (int i = 0; i < 5; i++)
    // {
    //     // printf("i=%d\n",i);
    //     for (int j = 0; j < 8; j++)
    //     {
    //         // Sleep(1000);
    //         // printf("\tj=%d",j);
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            // printf("*");
            printf("i=%d  j=%d \t",i,j);
        }
        printf("\n");
    }
    

    return 0;
}
