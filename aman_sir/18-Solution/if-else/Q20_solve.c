/* 20. Write a program in C to accept a grade and declare the equivalent
 description :
Grade	Description
E	Excellent
V	Very Good
G	Good
A	Average
F	Fail */

#include <stdio.h>

int main()
{
    char alf;

    printf("Enter the any alfa form E,V,G,A,F : ");
    scanf("%c",&alf);

    if (alf == 'A')
    {
        printf("You have chosen : Average");
    }
    else
    {
        if (alf == 'V')
        {
            printf("You have chosen : Very Good");
        }
        else
        {
            if (alf == 'G')
            {
                printf("You have chosen : Good");
            }
            else
            {
                if (alf == 'E')
                {
                    printf("You have chosen : Excellent");
                }
                else
                {
                    if (alf == 'F')
                    {
                        printf("You have chosen : Fail");
                    }
                    else
                    {
                        printf("Invalid !");
                    }
                }
            }
        }
    }

    return 0;
}
