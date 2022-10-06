#include<stdio.h>
int main()
{
    // *****
    // *****
    // *****
    // *****

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    
    // *
    // **
    // ***
    // ****
    // *****

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i ; j++)
        {
            printf("*");
        }
        printf("\n");
    } 

    // Step 1:  i=0 
    //         0<5 true
    //         (a) j=0
    //             0<= 0 True 
    //         (b) j=1
    //             1<=0 false 
    //         print "\n"
    // Step 2: i=1
    //         1<5 true 
    //         (a) j=0
    //             0<=1 true 
    //         (b) j=1
    //             1<=1 true 
    //         (c) j=2
    //             2<=1 false
    //         print "\n"
    






    return 0;
}
