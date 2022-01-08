#include<stdio.h>
int main()
{
    int age;
    printf("enter the age \n");
    scanf("%d",&age);//150

    if (age>=0 && age <=200)
    {
        printf("u r eligible for this \n");
        if (age<18)
        {
            printf("age is less than 18 \n");
            if (age<12)
            {
                printf("kids not allowed \n");
            }
        }
        else if (age==18)
        {
           printf("equal to 18 \n");
        }
        else
        {
            printf("age is less than 200 \n");
        }
    }
    else
    {
        printf("u r not eligible ");
    }
    return 0;
}
// && --> both the statements must be true 
// || --> one of the statements must be true