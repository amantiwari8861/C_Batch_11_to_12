#include<stdio.h>
#include<windows.h>
int main()
{
    
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
