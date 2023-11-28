#include<stdio.h>
int add(int,int);
// int add(int a,int num2);
//type 4 fxn : with argument and return type
int main()
{
    int a=10,b=20;
    printf("before calling in main \n");
    int sum=add(a,b);
    printf("the sum is %d in main \n",sum);
    return 0;
}
int add(int a,int num2)
{
    printf(" in add fxn a= %d b=%d\n",a,num2);
    return (a+num2);
}
//h.w make a calculator using switch and function