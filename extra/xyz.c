#include<stdio.h>
int add(int,int);
int main()
{
    int sum1,sum2,sum3;
    sum1=add(10,50);
    sum2=add(45,5);
    sum3=add(12,90);

    printf("%d %d %d \n",sum1,sum2,sum3);
    return 0;
}
int add(int a,int b)
{
    return a+b;
}