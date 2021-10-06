#include<stdio.h>

int num=10;// Global variable

void Show(int a)
{
    printf("the value of a =%d in Show fxn \n",a); //error
    printf("value of num in show fxn %d \n",num);
}
int main()
{
    int a=10; //local variable
    printf("the value of a =%d in main fxn \n",a);
    Show(a);
    printf("value of num in main fxn %d \n",num);
    return 0;
}