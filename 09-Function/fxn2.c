#include<stdio.h>
void add(int,int);
// void add(int a,int num2); //also valid
//type 2 fxn : with argument no return type
int main()
{
    int a=10,b=20;
    printf("before calling in main \n");
    add(a,b);
    printf("after calling in main \n");
    return 0;
}
void add(int a,int num2)
{
    int sum=a+num2;

    printf("the sum is %d \n",sum);
}