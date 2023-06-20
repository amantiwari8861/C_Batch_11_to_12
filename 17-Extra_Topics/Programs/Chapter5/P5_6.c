/*P5.6 Program to find whether a year is leap or not*/
#include<stdio.h>
int main(void)
{
	int year;
	printf("Enter year : ");
	scanf("%d",&year);

	if(year%100 != 0)
	{
		if(year%4 == 0)
			printf("Leap year\n");
		else
			printf("Not leap\n");		
	}
	else
	{ 
		if(year%400 == 0)
			printf("Leap year\n");
		else
			printf("Not leap\n");
	}
	return 0;
}
