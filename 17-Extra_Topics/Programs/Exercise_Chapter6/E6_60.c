/*E6.60*/
#include<stdio.h>
int diffDays(int d1,int m1,int y1,int d2,int m2,int y2);
int findJulian(int day,int month,int year);
int isLeap(int year);
int cmpdate(int d1,int m1,int y1,int d2,int m2,int y2);
int isValid(int d, int m, int y);
int main(void)
{
	int d1,m1,y1,d2,m2,y2;
	do
	{
		printf("Dates between years 1850 and 2050 are valid.\n");
		printf("Enter dates with valid day,month and year values\n");
		printf("Date1 should be before Date2\n\n");
		printf("Enter Date1(dd/mm/yyyy): ");
		scanf("%d/%d/%d",&d1,&m1,&y1);
		printf("Enter Date2(dd/mm/yyyy): ");
		scanf("%d/%d/%d",&d2,&m2,&y2);
	}while( !isValid(d1,m1,y1) || !isValid(d2,m2,y2) || cmpdate(d1,m1,y1,d2,m2,y2)==-1 );
	printf("Difference = %d\n",diffDays(d1,m1,y1,d2,m2,y2));
	return 0;
}/*End of main()*/

int cmpdate(int d1, int m1, int y1, int d2, int m2, int y2)
{
	if(y1<y2)
		return 1;
	if(y1>y2)
		return -1;
	if(m1<m2)
		return 1;
	if(m1>m2)
		return -1;
	if(d1<d2)
		return 1;
	if(d1>d2)
		return -1;
	return 0;
}

int isValid(int d, int m, int y)
{
	if(y<1850 || y>2050 || m<1 || m>12 || d<1 || d>31)
		return 0;
	if(m==2)	/*Check for number of days in February*/
		if(d==30 || d==31 || (d==29 && !isLeap(y)) )
			return 0;
	if(m==4 || m==6 || m==9 || m==11)/*Check days in April,June,Sept,Nov*/
		if(d==31)
			return 0;
	return 1;
}

int diffDays(int d1,int m1,int y1,int d2,int m2,int y2)
{
	int j1,j2,d,y;
	j1=findJulian(d1, m1, y1);
	j2=findJulian(d2, m2, y2);
	if(y1==y2)
		return j2-j1;
	d=0;
	for(y=y1+1; y<=y2-1; y++)
	{
		if(isLeap(y))
			d=d+366;
		else
			d=d+365;
	}
	if (isLeap(y1))
		return (366-j1) + d + j2 ;
	else
		return (365-j1) + d + j2 ;
}/*End of diffDays()*/

int findJulian(int d, int m, int y)
{
	int j = d;
	switch(m-1)
	{
		case 11:   j+=30;	/*Fall thru in all cases*/
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
	if( isLeap(y) && m!=1 && m!=2 )
			j = j+1;
	return j;
}

int isLeap(int y)
{
	if(y%100!=0 && y%4==0 || y%400==0)
		return 1;
	else
		return 0;
}
