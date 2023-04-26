#include<stdio.h>
int main()
{
    //3.ternary operators(conditional operator) : in which three operands are required
    int num1, num2, result;
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);//let 10 40
    //syntax : (condition) ? (if true) : (if false)

    result = (num1 > num2) ? num1 : num2;
    // result= (30>20) ? 30 : 20; // 30 ans.
    // result= (30>50) ? 30 : 50; // 50 ans.
    // result= (30==30) ? 1 : 0; // 1 ans.

    // result=(30>50) ? 30 :50; //50 ans.
    // result=( num1<num2) ? num1 : num2; //10 ans.

    printf("The result is %d \n", result);
    return 0;
}