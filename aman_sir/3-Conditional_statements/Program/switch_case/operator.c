#include <stdio.h>

int main()
{

    int num1, num2;
    char operation;

    printf("Enter the first number and second number = ");
    scanf("%d %d", &num1, &num2);

    printf("Enter the operator = ");
    scanf("%c", operation);

    switch (operation)
    {
    case '+':
        printf("Adding = %d \n", num1 + num2);
        break;

    case '-':
        printf("Subtract = %d \n", num1 - num2);
        break;

    case '*':
        printf("Multiply = %d \n", num1 * num2);
        break;

    case '/':
        printf("Divide = %d \n", num1 / num2);
        break;

    case '%':
        printf("Modulus = %d \n", num1 % num2);
        break;

    default:
        printf("Invalid operator");
        break;
    }
    return 0;
}
