#include<stdio.h>
#include<windows.h>
int main()
{
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 8; j++)
    //     {
    //         printf("*");
    //         Sleep(1000);
    //     }
    //     Sleep(4000);
    //     printf("\n");
    // }

    // for (int row = 0; row < 5; row++)
    // {
    //     for (int col = 0; col <= row; col++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int sp = 4; sp > i ; sp--)
    //     {
    //         printf(" ");
    //     }
    //     for (int str = 0; str <= i; str++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    for (int i = 0; i < 5; i++)
    {
        for (int sp = 4; sp > i; sp--)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%d",(j+1));
        }
        for (int k = i; k>0; k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    
    
    


    return 0;
}