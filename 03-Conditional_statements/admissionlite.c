#include<stdio.h>
int main()
{
    float marks;
    printf("enter ur marks :");
    scanf("%f",&marks);

    if(marks>=0 && marks<=100)
    {
        printf("valid marks\n");
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
    }
    else
    {
        printf("invalid marks\n");
    }
    
    return 0;
}
