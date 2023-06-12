#include<stdio.h>
int main()
{
    //conditional statements :if ,if else ,else if ,nested if,switch

    // syntax of if :   if(condition){  statements  }
    // int age;
    // printf("enter ur age :");
    // scanf("%d",&age);
    
    // if( age >= 18 ) //true block
    // {
    //     printf("you are ready to vote \n");
    // }
    // ---------------------------------------------------------
    // if-else syntax: if(condition){ statements }else{ statements  }

    // if(age>=18)
    // {
    //     printf("you can vote !\n");
    // }
    // else
    // {
    //     printf("you can't vote !\n");
    // }
// ____________________________________________________
    // else-if (ladder)
    /* syntax:
        if(condition1)
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
    // float marks;
    // printf("enter ur marks :");
    // scanf("%f",&marks);

    // if (marks>=90)
    // {
    //     printf("u got admission in DU \n");
    // }
    // else if (marks>80)
    // {
    //     printf("Got admission in IPU");
    // }
    // else if(marks>70)
    // {
    //     printf("Got admission in Amity");
    // }
    // else if (marks>=33)
    // {
    //     printf("IGNOU");
    // }
    // else
    // {
    //     printf("Chai Becho");
    // }

    //Nested if
    float marks;
    printf("enter ur marks :");
    scanf("%f",&marks);

    if (marks>=90)
    {
        printf("u got admission in DU \n");
        if (marks>95)
        {
            printf("Got scholarship of 50k");
        }
        else if(marks>92)
        {
            printf("scholarship of 25k");
        }
    }
    else if (marks>80)
    {
        printf("Got admission in IPU");
    }
    else if(marks>70)
    {
        printf("Got admission in Amity");
    }
    else if (marks>=33)
    {
        printf("IGNOU");
    }
    else
    {
        printf("Chai Becho");
    }

    return 0; 
}