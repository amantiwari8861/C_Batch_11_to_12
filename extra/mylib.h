#include<stdio.h>
float powerFxn(float num,float power)
{
    float res=1;
    for (int i = 0; i < power; i++)
    {
        res=res*num;
    }
    return res;
}

void greet()
{
    printf("hello world");
}