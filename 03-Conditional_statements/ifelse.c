#include<stdio.h>
int main()
{
    //conditional statements :if ,if else ,else if ,nested if,switch

    //conditional statements
    // syntax of if :   if(condition){  statements  }
    int age;
    printf("enter ur age :");
    scanf("%d",&age);
    /* if( age >= 18 ) //true block
    {
        printf("you are ready to vote \n");
    } */

    // ---------------------------------------------------------
    // if-else syntax: if(condition){ statements }else{ statements  }

    if(age>=18)
    {
        printf("you can vote !\n");
    }
    else
    {
        printf("you can't vote !\n");
    }
// ____________________________________________________
    // else-if (ladder)
    /* syntax:
        if(condition)
        {
            statements
        }
        else if(condition2)
        {
            statements
        }
        .
        .
        else
        {
            statements
        }
    */
     int marks;
    printf("enter ur marks :");
    scanf("%d",&marks);

        if(marks>=60)
        {
            printf("first division pass!\n");
        }
        else if(marks>=50)
        {
            printf("2nd division!\n");
        }
        else if(marks>=33)
        {
            printf("3rd division!\n");
        }
        else
        {
            printf("chai becho\n");
        }
    return 0; 
}
//h.w  check if a given no. is even or odd 
