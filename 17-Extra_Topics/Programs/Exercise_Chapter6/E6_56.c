/*E6.56*/
#include<stdio.h>
int isValid(int d,int m,int y);
int isLeap(int y);
int main(void)
{
	int day,month,year;
	printf("Enter date(dd/mm/yyyy): ");
	scanf("%d/%d/%d",&day,&month,&year);
	if( isValid(day,month,year) )
		printf("%d/%d/%d is a valid date\n",day,month,year);
	else
		printf("%d/%d/%d is not a valid date\n",day,month,year);
	return 0;
}
int isValid(int d,int m,int y)
{
	if(y<1850 || y>2050 || m<1 || m>12 || d<1 || d>31)
		return 0;
	if(m==2)	/*Check for number of days in February*/
		if(d==30 || d==31 || (d==29 && !isLeap(y)))
			return 0;
	if(m==4 || m==6 || m==9 || m==11)/*Check days in April,June,Sept,Nov*/
		if(d==31)
			return 0;
	return 1;
}
int isLeap(int y)
{
	if(y%100!=0 && y%4==0  || y%400==0)
		return 1;
	return 0;
}