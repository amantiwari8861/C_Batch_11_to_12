#include<stdio.h>
int main()
{
    int day_number;
    printf(" enter the day number :");
    scanf("%d",&day_number);
/* 
    if (day_number==1)
    {
        printf("Monday ");
    }
    else if (day_number==2)
    {
        printf(" Tuesday ");
    }
    else if (day_number==3)
    {
        printf(" Wednesday ");
    }
    else if (day_number==4)
    {
        printf(" Thrusday ");
    }
    else if (day_number==5)
    {
        printf(" Friday ");
    }
    else if (day_number==6)
    {
        printf(" Saturday ");
    }
    else if (day_number==7)
    {
        printf("Sunday ");
    }
    else
    {
        printf("invalid day !");
    } */
    

  switch(day_number)
    {
        case 1:
                printf("Monday ");
                break;
        case 2:
                printf("tuesday");
                break;
        case 3:
                printf("wednesday");
                break;
        case 4:
                printf("thrusday");
                break;
        case 5:
                printf("friday");
                break;
        case 6:
                printf("saturday");
                break;
        case 7:
                printf("sunday");
                break;
        default:
                printf("invalid day number");
                break;
    } 
    return 0;
}
