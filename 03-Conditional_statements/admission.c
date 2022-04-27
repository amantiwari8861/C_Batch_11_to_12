#include<stdio.h>

int main()
{
    int marks;
    printf("enter ur marks :");
    scanf("%d",&marks);

    if (marks>=90 && marks<=100)
    {
        printf("u got admission in DU\n");

        if (marks<=94)
        {
            printf(" u got mechanical branch \n");
        }
        else if (marks<=96)
        {
            printf("u got electronics \n");
        }
        else
        {
            printf(" CS \n");

            if (marks==100)
            {
                printf("u got scholarship of Rs.1 lakh \n");
            }
            
        }
        
    }
    else if(marks>=33 && marks<=89)
    {
        printf("u got admission in other university\n");
    }
    else
    {
        printf("sell tea \n");
    }
    

    return 0;
}
