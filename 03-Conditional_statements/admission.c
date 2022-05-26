#include<stdio.h>
int main()
{
    int marks;
    printf("enter ur marks :");
    scanf("%d",&marks);

    if (marks>=90 && marks<=100)
    {
        printf("u got admission in DU\n");

        if(marks>97)
        {
            printf("u got CS Branch\n");
        }
        else if(marks>95)
        {
            printf("u git EC Branch\n");
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
