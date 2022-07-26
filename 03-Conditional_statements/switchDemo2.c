#include<stdio.h>
int main()
{
    //switch is faster than else if bcz it works on hashing mechanism
    char operation;
    printf("Enter the operation: ");
    scanf("%c", &operation);

    int a,b,result;
    printf("Enter two numbers: \n");
    scanf("%d%d", &a, &b);

    switch (operation)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:printf("invalid operation\n");
        break;
    }
    
    printf("%d %c %d = %d\n", a, operation, b, result);

    return 0;
}
