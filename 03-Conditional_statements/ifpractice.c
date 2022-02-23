#include<stdio.h>
int main()
{
    int age;
    printf("enter the age \n");
    scanf("%d",&age);
    /*
        syntax: 
        if ( condition )
        {
            code 
        }
    */

    if (age>=18) //true block
    {
        printf("you are eligible for voting \n"); 
    }   

    //-------------------------------------------------------------------------
    // if (age<18)
    // {
    //     printf("age us less than 18 \n"); 
    // }
    // else
    // {
    //     printf("age is greater than or equal to 18\n");
    // }
    //-------------------------------------------------------------------------------
    /* 
    if (age<18)
    {
        printf("age us less than 18 \n"); 
    }
    else if (age==18)
    {
        printf("age is equal to 18 \n");
    }
    else if (age==24)
    {
        printf("age is 24 \n");
    } 
    else
    {
        printf("age is greater than 18\n");
    } 
    */

    return 0;
}
