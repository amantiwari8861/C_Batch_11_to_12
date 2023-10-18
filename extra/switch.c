#include<stdio.h>
int main()
{
    int monthNo;
    printf("enter a monthNo :");
    scanf("%d",&monthNo);

    // if (monthNo==1)
    // {
    //     printf("January");
    // }
    // else if (monthNo==2)
    // {
    //     printf("February");
    // }
    // else if (monthNo==3)
    // {
    //     printf("February");
    // }
    // else if (monthNo==4)
    // {
    //     printf("February");
    // }
    // else if (monthNo==5)
    // {
    //     printf("February");
    // }
    // else if (monthNo==6)
    // {
    //     printf("February");
    // }
    // else if (monthNo==7)
    // {
    //     printf("February");
    // }
    // else if (monthNo==8)
    // {
    //     printf("February");
    // }
    // else if (monthNo==9)
    // {
    //     printf("February");
    // }
    // else if (monthNo==10)
    // {
    //     printf("February");
    // }
    // else if (monthNo==11)
    // {
    //     printf("February");
    // }
    // else if (monthNo==12)
    // {
    //     printf("December");
    // }
    // else
    // {
    //     printf("Invalid month no.");
    // }
    
    switch(monthNo)
    {
        case 1:printf("Jan");
                break;
        case 2:printf("Feb");
                break;
        case 3:printf("March");
                break;
        case 4:printf("April");
                break;
        //..
        case 12:printf("December");
                break;
        default:printf("invalid day!!");
                break;
    }


    
    return 0;
}
