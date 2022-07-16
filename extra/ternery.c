#include<stdio.h>
int main()
{
    int num1, num2, result;
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);
    //syntax : (condition) ? (if true) : (if false)

    result = (num1 > num2) ? num1 : num2;
    
    printf("The result is %d \n", result);
    return 0;
}