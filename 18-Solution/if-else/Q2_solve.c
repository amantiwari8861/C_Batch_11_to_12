// 2. Write a C program to check whether a given number is even or odd.
#include<stdio.h>
int main()
{
    int num1;
    
    printf("Enter the a number = ");
    scanf("%d",&num1);

    if (num1%2 == 0)
    {
        printf("%d is an Even number",num1);
    }
    else
    {
        if (num1%2 == 1)
        {
           printf("%d is a Odd number",num1);
        }
        else
        {
            printf("Invalid number");
        }
        
    }
    
    
    return 0;
}