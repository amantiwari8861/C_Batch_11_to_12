#include <stdio.h>

void add(int, int);
void sub(int,int);
void multi(int,int);
void div(int,int);
void mod(int,int);
int main()
{
    int num1, num2;
    char op;
    printf("Enter first and second number = ");
    scanf("%d%d", &num1, &num2);
    fflush(stdin);
    printf("Enter any operater = ");
    scanf("%c", &op);
    fflush(stdin);

    switch (op)
    {
    case '+':
        add(num1, num2);
        break;

    case '-':
        sub(num1, num2);
        break;

    case '*':
        multi(num1, num2);
        break;

    case '/':
        div(num1, num2);
        break;

    case '%':
        mod(num1, num2);
        break;

    default:
    printf("Invalid !!");
        break;
    }
    return 0;
}
void add(int num1, int num2)
{
    int sum = num1 + num2;
    printf("%d + %d  = %d", num1, num2, sum);
}

void sub(int num1, int num2)
{
    int sum = num1 - num2;
    printf("%d - %d  = %d", num1, num2, sum);
}

void multi(int num1, int num2)
{
    int sum = num1 * num2;
    printf("%d * %d  = %d", num1, num2, sum);
}

void div(int num1, int num2)
{
    int sum = num1 / num2;
    printf("%d / %d  = %d", num1, num2, sum);
}

void mod(int num1, int num2)
{
    int sum = num1 % num2;
    printf("%d %% %d  = %d", num1, num2, sum);
}