#include<stdio.h>
int main()
{
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int space = 0; space < i; space++)
    //     {
    //         printf(" ");
    //     }
    //     for(int star=5;star>i;star--)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    
    //or


    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i==1 || j>=i )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    

    return 0;
}
