#include<stdio.h>
int main()
{
    
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 4-i; j > 0; j--)
    //     {
    //         printf(" ");
    //     }
    //     for (int k = 0; k <= i; k++)
    //     {
    //         printf("*");
    //     }
        
    //     printf("\n");
    // }

//     *
//    **
//   ***
//  ****
// *****

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(4-j<=i)
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
