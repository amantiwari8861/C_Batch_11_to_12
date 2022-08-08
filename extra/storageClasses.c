#include<stdio.h>
// int modi1=56;//global variable
extern int num3=98;
void check()
{
    // printf("num =%d in check\n",num);
    // printf("modi1 =%d in check\n",modi1);
    printf("num3 =%d in check\n",num3);
}
int main()
{
    // auto int num=50;//local variables
    // printf("num =%d in main\n",num);//50
    // printf("modi1 =%d in main\n",modi1);
    printf("num3 =%d in main\n",num3);
    check();
    return 0;
}
