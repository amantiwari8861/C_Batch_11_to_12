#include<stdio.h>
void fxn();
int modi=80;//global variable
int main()
{
    int a=50;//local variable
    printf(" in fxn main value of a =%d \n",a);
    fxn();
    printf(" in main value of modi =%d \n",modi);
    return 0;
}
void fxn()
{
    // printf(" in fxn value of a =%d \n",a);
    printf(" in fxn value of modi =%d \n",modi);
}
