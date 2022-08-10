#include<stdio.h>
int add(int n1,int n2)
{
    return n1+n2;
}
int mul(int num,int num2)
{
        return num*num2;
}
int div(int num,int num2)
{
     return num/num2;
   
}
int sub(int num,int num2)
{
    return num-num2;
    
}
int main()
{
    char choice;
    int num,num2,result=0;
    printf("enter the operation :\n");
    scanf("%c",&choice);
    printf("enter 2 input :\n");
    scanf("%d%d",&num,&num2);
    
    switch(choice)
    {
        case '+':result=add(num,num2);
                break;
        case '-':result=sub(num,num2);
                break;
        case '*':result=mul(num,num2);
                break;
        case '/':result=div(num,num2);
                break;
        default:printf("invalid operation !");
    }
    printf("the result is %d \n",result);
    return 0;
}
