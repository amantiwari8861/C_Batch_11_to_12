#include<stdio.h>
#include<math.h>
int main()
{
    int year;
    printf("enter the year :");
    scanf("%d",&year);

    if (year%4 == 0 && year%100 != 0    ||  year%400 == 0)
    {
        printf("%d year is leap year \n",year);
    }
    else
    {
        printf("%d year is not a leap year \n",year);
    }
    
    return 0;
}
