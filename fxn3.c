#include<stdio.h>
int add();
//type 3 fxn : no argument with return type
int main()
{
    printf("before calling in main \n");
    int sum=add();
    printf("the sum is %d in main \n",sum);
    return 0;
}
int add()
{
    int a=10,b=20;
    printf(" in add fxn  \n");
    return (a+b);
}