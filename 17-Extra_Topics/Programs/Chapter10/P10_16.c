/*P10.16 Program to input a date and print the month*/
#include<stdio.h>
int main(void)
{
	int d,m,y;
	char *months[] = {"January", "February", "March", "April", "May", "June", 
			"July", "August", "September", "October", "November", 
			"December"};
	printf("Enter date (dd/mm/yyyy) :  ");
	scanf("%d/%d/%d", &d, &m, &y);
	printf("%d %s %d\n", d,months[m-1],y);
	return 0;
}