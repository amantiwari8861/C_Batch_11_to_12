#include<stdio.h>
int main()
{
    float marks;
    printf("enter the marks :");
    scanf("%f",&marks);

    if (marks >=90 && marks<=100)
    {
        printf("u got admission in amity \n");

        if (marks>=97)
        {
            printf(" u got CS branch\n");
            if (marks==100)
            {
                printf("you got 80%% scholarship \n");
            } 
        }
        else if (marks>94)
        {
            printf("u got EC \n");
        }
        else
        {
            printf("MEC");
        }
    }
    else if (marks>=50 && marks<90)
    {
        printf("du");
    }
    else
    {
        printf("sell tea");
    }
    
    return 0;
}