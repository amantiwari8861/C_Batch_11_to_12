#include <stdio.h>
int factorial(int num);

int main()
{
    int num;
    printf("enter the number :");
    scanf("%d", &num); // 4
    int result = factorial(num);//4*3*2*1 =24
    printf("the factorial of %d is %d \n", num, result);
    return 0;
}
int factorial(int num)
{
    if(num==0 || num==1)
        return 1;
    else //termination condition (base condition)
        return num * factorial(num - 1);
}
// Write a program in C to calculate the sum of numbers from 1 to n using recursion.
// Write a program in C to Print Fibonacci Series using recursion.