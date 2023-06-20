/*E6.59*/
#include<stdio.h>
void printDayOfWeek(int day,int month,int year);
int findJulian(int day, int month, int year);
int isLeap(int year);
void Print(int julianDay,int year);
int isValid(int d,int m,int y);
int main(void)
{
	int day,month,year;
	printf("Enter date(dd/mm/yyyy): ");
	scanf("%d/%d/%d",&day,&month,&year);
	if(isValid(day,month,year))
        printDayOfWeek(day, month,year);
	else
		printf("Not a Valid date\n");
	return 0;
}/*End of main()*/

void printDayOfWeek(int day,int month,int year)
{
	int julianDay;
	julianDay = findJulian(day,month,year);
	Print(julianDay,year);
}
void Print(int j,int y)
{
	int f,h,fh,day;
	f = (y-1)/4;
	h = (y-1)/100;
	fh = (y-1)/400;
	day = (y+j+f-h+fh)%7;
	switch(day)
	{
		case 0: printf("Saturday\n");	break;
		case 1: printf("Sunday\n");		break;
		case 2: printf("Monday\n");		break;
		case 3: printf("Tuesday\n");	break;
		case 4: printf("Wednesday\n");	break;
		case 5: printf("Thursday\n");	break;
		case 6: printf("Friday\n");		break;
	}
}

int findJulian(int d,int m,int y)
{
	int j=d;
	switch(m-1)
	{
		case 11:   j+=30;		/*Fall thru in all cases*/
		case 10:   j+=31;
		case 9:    j+=30;
		case 8:    j+=31;
		case 7:    j+=31;
		case 6:    j+=30;
		case 5:    j+=31;
		case 4:    j+=30;
		case 3:    j+=31;
		case 2:    j+=28;
		case 1:    j+=31;
	}
	if( isLeap(y) && m>2 )
			j=j+1;
	return j;
}

int isLeap(int y)
{
	if(y%100!=0 && y%4==0  || y%400==0)
		return 1;
	return 0;
}

int isValid(int d, int m, int y)
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
