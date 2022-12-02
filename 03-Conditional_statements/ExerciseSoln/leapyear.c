#include<stdio.h>
int main()
{
    int year;
    printf("enter the year :");
    scanf("%d",&year);

    if ( (year%4 == 0 && year%100 != 0)  ||  year%400 == 0   )
    {
        printf("Leap year !");
    }
    // else if (year<400 && year%4==0)
    // {
    //     printf("Leap year !");
    // }
    else
    {
        printf("not a leap year ");
    }

    return 0;
}
