#include<stdio.h>
int factorial(int num)
{
    if (num>0)
    {
        return num*factorial(num-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num;
    printf("enter the number :");
    scanf("%d",&num);//3

    int result=factorial(num); 
    printf("the factorial of %d is %d \n",num,result);
    return 0;
}
