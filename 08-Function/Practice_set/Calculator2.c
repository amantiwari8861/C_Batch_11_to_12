#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
// int add(int n1,int n2);
int add(int, int);
int sub(int, int);
int mul(int, int);
int divide(int, int);
int main()
{
    char choice;
    int num, num2, result = 0;

    do
    {
        system("cls");
        printf("\t\tAddition (+) \n");
        printf("\t\tSubtraction (-) \n");
        printf("\t\tMultiplication (*) \n");
        printf("\t\tDivide (/) \n");
        printf("\t\tTo Exit enter (0) \n");

        fflush(stdin);
        printf("enter the operation :\n");
        scanf("%c", &choice);

        if(choice=='+' || choice=='-' || choice=='*' || choice=='/')
        {
            printf("enter 2 input :\n");
            scanf("%d%d", &num, &num2);
        }

        switch (choice)
        {
        case '+':
            result = add(num, num2);
            break;
        case '-':
            result = sub(num, num2);
            break;
        case '*':
            result = mul(num, num2);
            break;
        case '/':
            result = divide(num, num2);
            break;
        case '0':
            exit(0);
        default:
            printf("invalid operation ! Press any key to Continue...");
            getch();
            continue;
        }
        printf(" \n\t\t \x1b[107m \x1b[31m  the result is %d \x1b[0m \n", result);
        printf("Press any key to continue....");
        getch();

    } while (1);

    return 0;
}
int add(int n1, int n2)
{
    return n1 + n2;
}
int mul(int num, int num2)
{
    return num * num2;
}
int divide(int num, int num2)
{
    return num / num2;
}
int sub(int num, int num2)
{
    return num - num2;
}