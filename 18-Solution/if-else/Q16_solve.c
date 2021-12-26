/* 16. Write a C program to check whether a character is an alphabet,
 digit or special character. */


#include<stdio.h>
int main()
{
    char character;

    printf("Enter the any character = ");
    scanf("%c",&character);

    if (((character>='A') && (character<='Z')) || ((character>='a') && (character<='z')))
    {
        printf("%c is an alphabet Character.",character);
    }
    else
    {
        if ((character>='0') && (character<='9'))
        {
            printf("%c is a digit.",character);
        }
        else
        {
            printf("%c is a special character.",character);
        }
        
    }
    

    return 0;
}
