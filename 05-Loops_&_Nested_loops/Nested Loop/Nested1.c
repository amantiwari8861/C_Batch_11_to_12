#include<stdio.h>
#include<windows.h>
int main()
{
    
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf(" Chapter %d \n",i);
    //     for (int j = 1; j <= 4; j++)
    //     {
    //         Sleep(1000);
    //         printf("\tPara %d ",j);
    //     }
    //     printf("\n");
    // }

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            Sleep(1000);
            printf("i=%d j=%d   ",i,j);
        }
        printf("\n");   
    }        
    return 0;
}
