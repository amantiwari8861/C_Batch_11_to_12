#include <stdio.h>
int factorial(int num)
{
    if (num > 0)
    {
        return num * factorial(num - 1);
    }
    else
        return 1;
}
int main()
{
    int num;
    printf("enter the number :");
    scanf("%d", &num); // 4
    int result = factorial(num);
    printf("the factorial of %d is %d \n", num, result);
    return 0;
}
// Write a program in C to calculate the sum of numbers from 1 to n using recursion.
//  Write a program in C to Print Fibonacci Series using recursion.