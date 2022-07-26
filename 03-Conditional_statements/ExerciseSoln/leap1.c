#include<stdio.h>
void main()
{
int year;
printf("enter the year\n");
scanf("%d",&year);
if (((year%4==0))&&((year%100 !=0))||((year % 400==0)))
{ 
	printf("this is a leap year");
}
else{
	  printf("this is not a leap year");
	}
}