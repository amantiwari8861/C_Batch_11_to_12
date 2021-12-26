// 3. Write a C program to check whether a given number is positive or negative.

#include<stdio.h>

int main()
{
    int num1;
    printf("Enter any number = ");
    scanf("%d",&num1);

    if (num1>=0)
    {
        printf("%d is a positive number",num1);
    }
    else
    {
        if (num1<0)
        {
            printf("%d is a negative number",num1);
        }
        else
        {
           printf("please input any number");
        }   
    }
    
    return 0;
}
