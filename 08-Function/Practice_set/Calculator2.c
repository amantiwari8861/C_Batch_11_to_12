#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <math.h>
// float add(float n1,float n2);
float add(float, float);
float sub(float, float);
float mul(float, float);
float divide(float, float);
float volumeOfSphere(float r);

int main()
{
    char choice;
    float num, num2, result = 0,r;

    do
    {
        system("cls");
        printf("\t\tAddition (+) \n");
        printf("\t\tSubtraction (-) \n");
        printf("\t\tMultiplication (*) \n");
        printf("\t\tDivide (/) \n");
        printf("\t\tVolume of sphere (v)\n");
        printf("\t\tTo Exit enter (0) \n");

        fflush(stdin);
        printf("enter the operation :");
        scanf("%c", &choice);

        if (choice == '+' || choice == '-' || choice == '*' || choice == '/')
        {
            printf("enter 2 input :\n");
            scanf("%f%f", &num, &num2);
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
        case 'v':
            printf("enter the radius:");
            scanf("%f", &r);
            result = volumeOfSphere(r);
            break;
        case '0':
            printf("Thank You visit Again!!\n");
            exit(0);
        default:
            printf("invalid operation ! Press any key to Continue...");
            getch();
            continue;
        }
        printf(" \n\t\t \x1b[107m \x1b[31m  the result is %f \x1b[0m \n", result);
        printf("Press any key to continue....");
        getch();

    } while (1);

    return 0;
}
float add(float n1, float n2)
{
    return n1 + n2;
}
float mul(float num, float num2)
{
    return num * num2;
}
float divide(float num, float num2)
{
    return num / num2;
}
float sub(float num, float num2)
{
    return num - num2;
}
float volumeOfSphere(float r)
{
    return 4.0/3.0*M_PI*r*r*r;
}