#include<stdio.h>
#include<windows.h>
int main()
{
    // printf(".Aman.\n");
    // printf(".%d.\n",1);
    // printf(".%d.\n",10);
    // printf(".%d.\n",100);
    // printf(".%d.\n",1000);

    // printf(".%4d.\n",1);
    // // printf(".%d.\n",10);
    // // printf(".%d.\n",100);
    // printf(".%d.\n",1000);

    //1x1=1 2x1=2 3x1=3 . . 8x1=8
    //1x2=2 2x2=4 3x2=6 . . 8x2=16
    //.     .       .   . .     .
    //1x10=10 2x10=20 3x10=30 . . 8x10=80

    for (int i = 1; i <= 10; i++)
    {
        printf(" 1 x%2d=%2d ",i,1*i);
        printf(" 2 x%2d=%2d ",i,2*i);
        printf(" 3 x%2d=%2d ",i,3*i);
        printf(" 4 x%2d=%2d ",i,4*i);
        printf(" 5 x%2d=%2d ",i,5*i);
        printf(" 6 x%2d=%2d ",i,6*i);
        printf(" 7 x%2d=%2d ",i,7*i);
        printf(" 8 x%2d=%2d ",i,8*i);
        // Sleep(5000);
        printf("\n");
    }
    return 0;
}
