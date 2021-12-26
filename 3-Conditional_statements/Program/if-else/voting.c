#include<stdio.h>
int main()
{
    int age;
    printf("enter the age :");
    scanf("%d",&age);
    if (age <12)
    {
        printf("less than 12 yr \n");
    }
    else if (age<18)
    {
        printf("less than 18 \n");
    }
    else if(age==18)
    {
        printf("equal to 18 \n");
    }
    else
    {
        printf("greater than 18 \n");
    }
    return 0;
}