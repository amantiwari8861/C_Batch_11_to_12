#include<stdio.h>
#include<windows.h>
int main()
{
    
    for (int i = 1; i <= 10; i++)
    {
        printf("1 X %2d = %2d   ",i,i*1);
        printf("2 X %2d = %2d   ",i,i*2);
        printf("3 X %2d = %2d   ",i,i*3);
        printf("4 X %2d = %2d   ",i,i*4);
        printf("5 X %2d = %2d   ",i,i*5);
        printf("6 X %2d = %2d   ",i,i*6);
        printf("7 X %2d = %2d   ",i,i*7);
        printf("8 X %2d = %2d   ",i,i*8);
        printf("\n");
        // Sleep(3000);
    }
    //   1
    //  15
    // 100

    return 0;
}
