#include<stdio.h>
#include<windows.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("1 X%2d = %2d  ",i,1*i);
        printf("2 X%2d = %2d  ",i,2*i);
        printf("3 X%2d = %2d  ",i,3*i);
        printf("4 X%2d = %2d  ",i,4*i);
        printf("5 X%2d = %2d  ",i,5*i);
        printf("6 X%2d = %2d  ",i,6*i);
        printf("7 X%2d = %2d  ",i,7*i);
        printf("8 X%2d = %2d  ",i,8*i);
        printf("\n");
        Sleep(4000);
    }
    return 0;
}

