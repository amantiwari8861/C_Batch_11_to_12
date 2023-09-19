#include<stdio.h>
#include<windows.h>
// #include<unistd.h>
int main()
{
    
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf(" Chapter %d \n",i);
    //     for (int j = 1; j <= 4; j++)
    //     {
    //         printf("\tSection %d ",j);
    //         // Sleep(1000);
    //     }
    //     printf("\n");
    // }


    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         printf("i=%d j=%d   ",i,j);
    //         Sleep(1000);
    //     }
    //     printf("\n");   
    // }      
      
    for (int i = 0; i < 4; i++)
    {
        for (int j = 5; j > 0; j--)
        {
            printf("i=%d j=%d  ",i,j);
        }
        printf("\n");
    }
    
    return 0;
}
