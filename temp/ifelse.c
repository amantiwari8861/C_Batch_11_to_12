#include<stdio.h>
int main()
{
    // conditional statements 
    //  eg. if,if-else,else-if ladder, nested if

    // int age;
    // printf("enter ur age :");
    // scanf("%d",&age);

    // if(age>=18) // true block
    // {
    //     printf("u are ready to vote!\n");
    // }

    // if(age>=18) // true block
    // {
    //     printf("u are ready to vote!\n");
    // }
    // else
    // {
    //     printf("u are not ready to vote!");
    // }

    float per;
    printf("enter ur percentage:");
    scanf("%f",&per);

// 12>=80 && 12<=100
// 0 && 1
// 0

// 120>=80 && 120<=100
// 1 && 0 
// 0

// 90>=80 && 90<=100
// 1 && 1 
// 1


    // if (per>=80 && per<=100)
    // {
    //     printf("u got admission in DU \n");
    // }
    // else if(per>=60 && per<80)
    // {
    //     printf("u got admission in IPU \n");
    // }
    // else if(per>=33 && per<60)
    // {
    //     printf("u will get admission in any private university!\n");
    // }
    // else if(per>=0 && per<33)
    // {
    //     printf("sell tea \n");
    // }
    // else
    // {
    //     printf("pls input valid percentage! \n");
    // }
    
    
    if (per>=80 && per<=100)
    {
        printf("u got admission in DU \n");
        if (per==100)
        {
            printf("no fee will be charged \n");
        }
        else if(per>=95)
        {
            printf(" u got 50K scholarship !\n");
        }
    }
    else if(per>=60 && per<80)
    {
        printf("u got admission in IPU \n");
    }
    else if(per>=33 && per<60)
    {
        printf("u will get admission in any private university!\n");
    }
    else if(per>=0 && per<33)
    {
        printf("sell tea \n");
    }
    else
    {
        printf("pls input valid percentage! \n");
    }
    

    return 0;
}