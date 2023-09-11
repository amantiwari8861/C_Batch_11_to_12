#include<stdio.h>
#include<windows.h>
int main()
{
    //WAP to perform basic arithmatic operation according to it's symbol eg. +
    char operation;
    int num1,num2,result;
    printf("enter the operation:");
    scanf("%c",&operation);

    // printf(" %c ",operation);

    if (operation=='+' || operation=='-' || operation=='*' || operation=='/')
    {
        printf("enter 2 numbers\n");
        scanf("%d%d",&num1,&num2);
    }
    
    switch(operation)
    {
        case '+':result=num1+num2;
        break;
        case '-':result=num1-num2;
        break;
        case '*':result=num1*num2;
        break;
        case '/':result=num1/num2;
        break;
        default:printf("invalid operation\n");
        exit(0);
        break;
    }

    printf("result= %d \n",result);

    return 0;
}
