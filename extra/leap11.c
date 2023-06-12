#include<stdio.h>
int main()
{

    int year;
    printf("enter the year: ");
    scanf("%d",&year);

    if ((year%4==0 && year%100 != 0) || year%400 == 0)
    {
        printf("%d is leap year \n",year);
    }
    else
    {
        printf("%d is not a leap year\n",year);
    }
        
    return 0;
}
