#include<stdio.h>
void fxn2(int);
int modi=200;
void fxn()
{
    int num5;
    // printf("the value of num is %d \n",num); error
    printf("the value of modi in fxn is %d \n",modi);
}
int main()
{
    int num=100;
    fxn();
    fxn2(num);
    printf("the value of modi in main is %d \n",modi);
    return 0;
}
void fxn2(int number)
{
    printf(" number in fxn2 %d \n",number);
}