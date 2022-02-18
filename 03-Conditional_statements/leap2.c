#include<stdio.h>

int main()
{
    // Every year that is exactly divisible by four is a leap year, except 
    // for years that are exactly divisible by 100, but these centurial years
    // are leap years if they are exactly divisible by 400. 
    // For example, the years 1700, 1800, and 1900 are not leap years,
    // but the years 1600 and 2000 are.

    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year%400 == 0)
    {
        printf("%d is a leap year.\n", year);
    }
    else if (year%100 == 0)
    {
        printf("%d is not a leap year \n",year);
    }
    else if (year%4==0)
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("not a leap year.\n");
    }
    return 0;
}
