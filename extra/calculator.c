#include<stdio.h>
#include<conio.h>

float add(float num1,float num2)
{
    return num1+num2;
}
float multi(float num1,float num2)
{
    return num1*num2;
}

int main()
{
    char ch;
    do{
        char op;
        printf("\nenter operation:");
        scanf("%c",&op);

        float num1,num2,result;
        printf("enter 2 numbers \n");
        scanf("%f%f",&num1,&num2);
        
        switch (op)
        {
        case '+':
            result=add(num1,num2);
            break;
        
        case '*':
            result=multi(num1,num2);
            break;
        
        default:printf("invalid operation!\n");
            break;
        }

        printf("the result is %f \n",result);

        fflush(stdin);
        printf("press enter to input again...");
        ch=getch();
    }while(ch=='\r');


    return 0;
}