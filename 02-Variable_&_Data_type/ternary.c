#include<stdio.h>
int main()
{
    int num1, num2, result;
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);
    //syntax : (condition) ? (if true) : (if false)

    // result = (num1 > num2) ? num1 : num2;
    // result= (30>20) ? 30 : 20; // 30 ans.
    // result= (30>50) ? 30 : 50; // 50 ans.
    // result= (30==30) ? 1 : 0; // 1 ans.

    result=(30<50) ? 30 :50; //30 ans.

    printf("The greater number is %d \n", result);
    return 0;
}