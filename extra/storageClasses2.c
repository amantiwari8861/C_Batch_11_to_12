#include<stdio.h>
void myFxn();
int modiji=56;
int main()
{
    int a=50;
    int modiji=89;
    // printf("a= %d in main fxn\n",a);
    printf(" %d in main fxn\n",modiji);
    modiji=56*2;
    myFxn();
    return 0;
}
void myFxn()
{
    // printf("a= %d in myFxn\n",a);
    printf(" %d in myfxn\n",modiji);
}