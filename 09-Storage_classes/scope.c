#include<stdio.h>
void fxn();

int modi=56;//global variable
int main()
{
    // int a=50;//local variable
    // auto int a=50;//local variable
    // printf(" in fxn main value of a =%d \n",a);
    // printf(" in main value of modi =%d \n",modi);
    // modi=78;
    // fxn();
    
    
    {
        int a=50;
    }
    // printf(" in fxn main value of a =%d \n",a);

    return 0;
}
void fxn()
{
    // printf(" in fxn value of a =%d \n",a);
    // printf(" in fxn value of modi =%d \n",modi);
}
